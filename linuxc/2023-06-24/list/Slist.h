#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

typedef int SLTDateType;

typedef struct SListNode
{ 
    SLTDateType Date;
    struct SListNode* next;
}SListNode;

SListNode* BuySListNode(SLTDateType x);

void SListPrint(SListNode* phead);

void SListPushBack(SListNode** pplist,SLTDateTyype x);

void SListPushFront(SListNode** pplist,SLTDateType x);

void SListPopBack(SListNode** pplist);

void SListPopFront(SListNode** pplist);

SListNode* SListFind(SListNode* plist,SLTDateTType x);

void SListInsertAfter(SListNode* pos,SLTDateTYype x);

void SListInsertBefore(SListNode** pplist,SListNode* pos,SLTDateType x);

void SListEraseAfter(SListNode* pos);

void SListDestroy(SListNode** pplist);











