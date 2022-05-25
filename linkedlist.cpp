#include<bits/stdc++.h>
using namespace std;
struct node {
    int info;
    struct node* link;
};
struct node* head;
struct node* head1;
struct node* head3;
int main() {
    int n;
   head = NULL;
    cin>>n;
    while(n--) {
    int a;
    cin>>a;
    head1 = (struct node*)malloc(sizeof(struct node));
    if(head == NULL){
    head = head1;
    head3 =head;
    head1->link=NULL;
    head1->info = a;
    }
    else{
    head1->info = a;
     head1->link = NULL;
     head->link =head1;
     head=head1;
    }

    }

    struct node* link1= head3;
    while(link1!= NULL){
    int x =(link1->info) * 2;
      cout<<x<<" ";
      link1 = link1->link;
    }
    return 0;

}
