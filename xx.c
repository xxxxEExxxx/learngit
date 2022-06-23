

void  MoveOddEven(LinkList &list)
{
   LinkList head=list->next,pre=head->next,q=pre->next;

   free(head);//释放原链表的头指针，因为头指针无数据
   LinkList head1=(LinkList)malloc(sizeof(struct Node));
    LinkList pre1=head1;//pre1指针随着新插入的节点移动，便于进行尾插法
   LinkList head2=(LinkList)malloc(sizeof(struct Node));
    LinkList pre2=head2;//pre2指针随着新插入的节点移动，便于进行尾插法
   while(q!=head->next)//原链表是循环链表，当q遍历到原来pre的位置时,遍历结束
   {
       if(pre->data%2==0)//判断元素是否为偶数
       {
           pre->next=pre1->next;
           pre1->next=pre;
           pre1=pre1->next;
       }
       else//若不是偶数，则为奇数
       {
           pre->next=pre2->next;
           pre2->next=pre;
           pre2=pre2->next;
       }
       pre=q;
       q=q->next;//pre始终保持在q的前面
   }
   head1=head1->next;//********
   pre2->next=head1;//*******
   pre1->next=head2;//**星号部分的语句均为将0head1链表和head2链表进行形成一个新的但循坏链表
   return pre1;//返回新循坏链表的尾指针

}
