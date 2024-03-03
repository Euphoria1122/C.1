#include "linkedlist.h"

PLinkedList createLinkedList()
{
    PLinkedList newList = (PLinkedList)malloc(sizeof(LinkedList));
    newList->header = NULL;
    newList->ender = NULL;
    newList->size = 0;
    return newList;
}

PNode createNode(void* data)
{
    PNode newNode = (PNode)malloc(sizeof(Node));
    newNode->prev = NULL;
    newNode->next = NULL;
    newNode->data = data;
    return newNode;
}

void add(PLinkedList list, void* data)
{
    PNode newNode = createNode(data);
    if (list->header==NULL)
    {
        list->header = newNode;
        list->ender= newNode;
        
    }
    else
    {
        list->ender->next = newNode;
        newNode->prev = list->ender;
        list->ender=newNode;
    }
    list->size++;
}

void insert(PLinkedList list, int index, void* data)
{
    if (list->size == 0||index>list->size)
    {
        add(list, data);
        return;
    }
    PNode newNode = createNode(data);
    if (index <= 0)
    {
        newNode->next = list->header;
        list->header->prev = newNode;
        list->header = newNode;
    }
    else
    {
        PNode p = findNode(list, index);
        PNode q = p->prev;


        newNode->next = p;
        p->prev = newNode;

        q->next = newNode;
        newNode->prev = q;
    }
    list->size++;
}

void* removeIndex(PLinkedList list, int index)
{
    PNode p = NULL;
    if (list->size == 0)
    {
        return NULL;
    }
    else if (list->size == 1)
    {
        p = list->header;
        list->header = list->ender = NULL;
    }
    else if (index <=0)
    {
        p = list->header;
        list->header = list->header->next;
        list->header->prev = NULL;
    }
    else if(index>=list->size-1)
    {
        p = list->ender;
        list->ender = p->prev;
        list->ender->next = NULL;
    }
    else
    {
        p = findNode(list, index);
        PNode q = p->prev;
        PNode n = p->next;
        q->next = n;
        n->prev = q;
    }
    void* temp = p->data;
    free(p);
    list->size--;
    return temp;
}

void removeData(PLinkedList list, void* data, Compare fun)
{
    int xb = indexOf(list, data, fun);
    if (xb > 0)
    {
        removeIndex(list, xb);
    }
}

void* get(PLinkedList list, int index)
{
    PNode p = findNode(list,index);
    if (p != NULL)
    {
        return p->data;
    }
    return NULL;
}

PNode findNode(PLinkedList list, int index)
{
    PNode p = list->header;
    for (int i = 0; i < index; i++)
    {
        p = p->next;
    }
    return p;
}

void set(PLinkedList list, int index, void* newdata)
{
    removeIndex(list, index);
    insert(list, index, newdata);
}

int indexOf(PLinkedList list, void* data, Compare fun)
{
    iterator(list);
    int i = 0;
    while (hasNext(list))
    {
        void* p = next(list);
        if (fun(p, data))
        {
            return i;
        }
        i++;
    }
    return -1;
}

int size(PLinkedList list)
{
    return list->size;
}

void clear(PLinkedList list)
{
    PNode p = list->header;
    PNode q = NULL;
    while (p!=NULL)
    {
        q = p;
        p=p->next;
        free(q);
        list->size--;
    }
    list->header = list->ender = NULL;
}

void iterator(PLinkedList list)
{
    list->nextNode = list->header;
}

int hasNext(PLinkedList list)
{
    return list->nextNode!=NULL;
}

void* next(PLinkedList list)
{
    void* temp = list->nextNode->data;
    list->nextNode = list->nextNode->next;
    return temp;
}

void push(PLinkedList list, void* data)
{
    add(list, data);
}

void* pop(PLinkedList list)
{
    return removeIndex(list,list->size-1);
}

void addFirst(PLinkedList list, void* data)
{
    insert(list, 0, data);
}

void addLast(PLinkedList list, void* data)
{
    add(list, data);
}

void* removeFirst(PLinkedList list)
{
    return removeIndex(list,0);
}

void* removeLast(PLinkedList list)
{
    return removeIndex(list,size(list)-1);
}

