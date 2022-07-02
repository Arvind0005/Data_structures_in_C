/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        unsigned long long int num1=0,num2=0;
        int sum1=0,sum2=0;
        int i=0;
        while(l1->next!=NULL)
        {
            num1+=l1->val*(pow(10,i));
            i++;
            l1=l1->next;
        }
        num1+=l1->val*(pow(10,i));
        i=0;
        while(l2->next!=NULL)
        {
            num2+=l2->val*(pow(10,i));
            i++;
            l2=(l2->next);
        }
        num2+=l2->val*(pow(10,i));
       unsigned long long int num3=num1+num2;
        cout<<num1<<" num1 "<<num2<<" num2 "<<num3<<" num3 ";
        ListNode* prevnode=NULL;
        ListNode* finalnode;
        ListNode* prev=NULL;
        ListNode* next=NULL;
        while(num3>0)
        {
            unsigned long long int ld=num3%10;
            ListNode* newnode = new ListNode(ld);
            newnode->next =prevnode;
            prevnode =newnode;
            if(num3<10)
            {
                finalnode=newnode;
               
                while(newnode!=NULL)
                {
                    next=newnode->next;
                    newnode->next=prev;
                    prev=newnode;
                    newnode=next;
                }
                return prev;
            }
            num3=num3/10;
        }
        ListNode* newnode = new ListNode(0);
        return newnode;
    }
};
