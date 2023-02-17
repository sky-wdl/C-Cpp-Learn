//
// Created by Administrator on 2023/2/17.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct node
{
 int num;
 struct node* next;
};

//打印函数
void printList(struct node* head);
struct node* createList();
struct node* deleteDuplicates(struct node* head);
int main(){

 //头指针
 struct node* head=NULL;
 head = createList();
 head = deleteDuplicates(head);
 printList(head);
 return 1;
}



struct node* createList(){
 //头指针
 struct node* head=NULL;
 struct node* p1,*p2;
 int num;
 scanf("%d",&num);
 while(num!=0)
 {
 //创建一个新的结点
 p1 = (struct node* ) malloc(sizeof(struct node));
 //把信息拷贝到新的结点
 p1->num = num;
 if(head==NULL){
 head = p1;
 head->next=NULL;
 }
 else{
 p2=head;
 while(p2->next!=NULL)
 {
 p2=p2->next;
 }
 p2->next = p1;
 p1->next = NULL;
 }
 scanf("%d",&num);
 }
 return head;
}



2023/2/17 10:33 22级C语言期末考试A卷

https://coder.wtu.edu.cn/admin/courseAdmin/examAdmin/examPaperToWord.jsp?showAnswer=true&examPaperID=108 10/10

void printList(struct node* head){
 struct node* p;
 if(head==NULL)
 {
 printf("Empty List\n");
 return;
 }
 else{
 p=head;
 while(p!=NULL)
 {
 printf(" %d",p->num);
 p=p->next;
 }
 }

}

struct node* deleteDuplicates(struct node* head){
    //空链表就直接返回空指针
    if(!head)  // 注：在条件判断中，head == NULL 和 !head 所起的作用是一样的。
        return NULL;

    struct node* cur = head;
    while(cur->next && cur)  // 注意循环条件
    {
        struct node* next = cur->next;
        //若相等，则删掉下一个节点
        if(cur->num == next->num)
        {
            cur->next = next->next;
            free(next);
        }
        //若不等，则将下一个节点变为当前节点
        else
            cur = cur->next;
    }

    return head;
}