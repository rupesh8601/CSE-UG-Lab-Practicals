#include<stdio.h>		 
#include"../list.h"

node * rev(node *head)
{
   node * temp,*p,*q;
   temp=NULL;
   p=head;
   if(p==NULL || p->next==NULL) 
   {  printf("\n No elements to reverse \n");
        return p; }
  while(p!=NULL)
 {   
   q=p->next ;
   p->next=temp;
   temp=p;
   p=q;
   }
  head=temp;

  printf("\n List Reversed using iterative method \n");
  display_l(head);
  return head;
 }
