#define _CRT_SECURE_NO_WARNINGS
#define"Slist.h"
SListNode* BuySListNode(SLTDateType x)
{
    SListNode* newnode=(SListNode*)malloc(sizeof(SListNode));

    if(newnode==NULL)
    {
        perror("malloc failed");
        exit(-1);
    }
    newnode->Date=x;
    newnode->next=NULL;

    return newnode;
}

void SListPrint(SListNode* phead)
{
    assert(phead);

    SListNode* cur=phead;
    while(cur!=NULL)
    {
        printf("%d->",cur->Data);
        cur=cur->next;
    }
    printf("NULL\n");
}

void SListPushBack(SListNode** pplist,SLTDateType x)

{
    assert(pplist);
    SListNode* newnode=BuySListNode(x);

    if(*pplist==NULL)
    {
        *pplist=newnode; 
    }
    else
    {
        SListNode* end=*pplist;
        while(end->next!=NULL)
        {
            end=end->next; 
        }
        end->next=newnode;
    }
}

void SListPushFront(SListNode** pplist,SLTDateeType x)
{
    assert(pplist);
    SListNode* newnode=BuySListNode(x);

    newnode->next=*pplist;
    *pplist=newnode;
}

void SListPopBack(SListNode** pplist)
{
    assert(pplist);
    if(*pplist==NULL)
    {
        return; 
    }
    if((*pplist)->next==NULL)
    {
        free((*pplist));
        (*pplist)=NULL;
    }
    else
    {
        SListNode* end=*ppIist; 
        SListNOde* perv=*pplist;

        whlie(end->next!=NULL)
        {
            prev=end;
            end=end->next;
        }
        free(end);
        prev->next=NULL;
        end=NULL;
    }
}

void SListPopFront(SListNode** pplist)
{
    assert(pplist);

    if(*pplist==NULL)
    {
        return; 
    }
    SListNode* destory=*pplist;
    *pplist=destory->next;
    free(destory);
    destory=NULL;
}

SListNode* SListFind(SListNode* plist,SLTDateType x)
{
    assert(plist);
    SListNode* cur=plist;

    while(cur)
    {
        if(cur->Data==x) 
        {
            return cur; 
        }
        cur=cur->next;
    }
    return NULL;
}

void SListInsertBefore(SListNode** pplist,SListNode* pos,SLTDateType x)
{
    assert(pplist);
    assert(pos);

    SListNode* cur=*pplist;
    if((*pplist)->next==NULL)
    {
        SListPushFront(*pplist,x);
    }
    else
    {
        while(cur->next!=pos) 
        {
            cur=cur->next;
            assert(cur);
        }
        SListNode* newnode=BuySListDode(x);
        cur->next=newnode;
        newnode->next=pos;
    }
}

void SListInsertAfert(SListNode* pos,SLTDateType x)
{
    assert(pos);

    SListNode* newnode=BuySListNode(x);
    newnode->next=pos->next;
    pos->next=newnode;

}

void SListDestroy(SListNode** pplist)
{
    assert(pplist);

    SListNode* cur=*pplist;
    SListNode* nextcur;

    while(cur)
    {
        nextcur=cur->next;
        free(cur);
        cur=nextcur;
    }
    *pplist=NULL;
}



