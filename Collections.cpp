#include "collections.h"

void addAll__(PLinkedList list1, PLinkedList list2)
{
    PLinkedList p = list2;
    list1->ender->next = p->header;
    p->header->prev = list1->ender;
    list1->ender = p->ender;
}

void* max__(PLinkedList list, Compare fun)
{
    if (list->header == NULL)
    {
        return NULL;
    }
    PNode p = list->header;
    void* newValue = list->header->data;
    while (p != NULL)
    {
        void* temp = p->data;
        if (fun(newValue, temp) < 0)
        {
            newValue=temp;
        }
        p = p->next;
    }
    return newValue;
}

void* min__(PLinkedList list, Compare fun)
{
    if (list->header == NULL)
    {
        return NULL;
    }
    PNode p = list->header;
    void* newValue = p->data;
    while (p != NULL)
    {
        void* temp = p->data;
        if (fun(newValue, temp) > 0)
        {
            newValue = temp;
        }
        p=p->next;
    }
    return newValue;
}

void swap__(PLinkedList list, int i, int j)
{
    void*tempIndexi=get(list, i);
    set(list, i, get(list, j));
    set(list, j, tempIndexi);
}

void sort__(PLinkedList list, Compare fun)
{
    PNode p_suo = list->header;
    PNode p_bi;
    for (; p_suo!=list->ender ; p_suo = p_suo->next)
    {
        p_bi = p_suo->next;
        for (; p_bi!= NULL; p_bi = p_bi->next)
        {
            if (fun(p_suo->data, p_bi->data) > 0)
            {
                void* p = p_suo->data;
                p_suo->data = p_bi->data;
                p_bi->data = p;
            }
        }
    }
}

int binarySearch__(PLinkedList list, void* key, Compare fun)
{
    int low = 0;
    int high = size(list) - 1;
    int mid = 0;
    do {
        mid = (low + high) / 2;
        void* midValue = get(list, low);
        int r = fun(midValue, key);
        if (r==0)
        {
            return mid;
        }
        else if (r > 0)
        {
            high = mid+1;
        }
        else if (r < 0)
        {
            
            low = mid-1;
        }
    } while (low<high);
    return 0;
}

void reverse__(PLinkedList list)
{
    PNode pi = list->header;
    PNode pj = list->ender;
    for (int i = 0, j = size(list) - 1; i < j; i++, j--)
    {
        void* t;
        t = pi->data;
        pi->data = pj->data;
        pj ->data = t;
        pi=pi->next;
        pj = pj->prev;
    }
}
