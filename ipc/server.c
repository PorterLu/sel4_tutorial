

#include <assert.h>
#include <sel4/sel4.h>
#include <stdio.h>
#include <utils/util.h>

// cslot containing IPC endpoint capability
extern seL4_CPtr endpoint;
// cslot containing a capability to the cnode of the server
extern seL4_CPtr cnode;
// empty cslot
extern seL4_CPtr free_slot;

int main(int c, char *argv[]) {

    seL4_Word sender;
    seL4_MessageInfo_t info = seL4_Recv(endpoint, &sender); // receive message from the endpoint, the badge value will be put into variable sender.
    while (1) {
	    seL4_Error error;
        if (sender == 0) {

             /* No badge! give this sender a badged copy of the endpoint */
             seL4_Word badge = seL4_GetMR(0);     // get message from the MR0, which usually presents the badge the sender want set
             seL4_Error error = seL4_CNode_Mint(cnode, free_slot, seL4_WordBits,     // create a endpoint capability with badge from the capability
                                                cnode, endpoint, seL4_WordBits,
                                                seL4_AllRights, badge);
             printf("Badged %lu\n", badge);

             seL4_SetCap(0, free_slot);           // put free_slot into the first cap slot, which is sending capability
             info = seL4_MessageInfo_new(0, 0, 1, 0);  // the message to be send, which specifies a capability

             /* reply to the sender and wait for the next message */
             seL4_Reply(info);

             /* now delete the transferred cap */
             error = seL4_CNode_Delete(cnode, free_slot, seL4_WordBits);
             assert(error == seL4_NoError);

             /* wait for the next message */
             info = seL4_Recv(endpoint, &sender);
        } else {

             for(int i = 0; i < seL4_MessageInfo_get_length(info); i++) {
                printf("%c", (char)seL4_GetMR(i));	// get message data from register
             }
             printf("\n");

             error = seL4_CNode_SaveCaller(cnode, free_slot, seL4_WordBits);  // save caller badge into specific slot
             assert(error == 0);
             info = seL4_Recv(endpoint, &sender); 	// receiver message
             for(int i = 0; i < seL4_MessageInfo_get_length(info); i++) {
               printf("%c\n", (char)seL4_GetMR(i));	
             }
             printf("\n");

             seL4_Send(free_slot, seL4_MessageInfo_new(0, 0, 0, 0));	// server sends a message to the previous sender

             info = seL4_ReplyRecv(endpoint, info, &sender); // receive and reply
        }
    }

    return 0;
}
