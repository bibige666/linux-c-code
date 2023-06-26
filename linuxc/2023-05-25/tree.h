//树的头文件
#ifndef _TREE_H_
#define _TREE_H_
#include <stdio.h>
#include <stdlib.h>//malloc free
//节点的定义
typedef struct node{
    int data;//数据
    struct node* left;//指向左子树
    struct node* right;//指向右子树
}node_t;

//树的定义
typedef struct tree{
    node_t* root;//指向树根
    int cnt;//树中节点的个数
}tree_t;

//树的操作
//树的初始化
//tree_t tree;
void tree_init(tree_t* t);
//向树中插入节点
void tree_insert(tree_t* t,int data);
//删除节点
void tree_del(tree_t* t,int data);
//前序遍历
void tree_first(node_t* n);
//中序遍历
void tree_mid(node_t* n);
//后序遍历
void tree_last(node_t* n);

#endif//_TREE_H_
