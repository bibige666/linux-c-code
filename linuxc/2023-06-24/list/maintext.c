#define _CRT_SECURE_NO_WARNINGS
#include"Slist.h"

void Text1()
{
    SListNode* plist=NULL;

    SListPushFront(&plist,1);
    SListPushFront(&plist,2);
    SListpushFront(&plist,3);
    SListpushFront(&plist,4);
    
    SListPrint(plist);
    SListPopFront(&plist);
    SListprint(plist);

    SListPopBack(&plist);
    SListPrint(plist);

    SListFind(&plist,2);
    SListPrint(plist);
    SListNode* pos = SListFind(plist,3);
} 

int main()
{
    Text1();
    return 0;
}











