#include<bits/stdc++.h>
using namespace std;
struct node {
    int info;
    struct node* link;
};
struct node* head;
struct node* privious_node;
struct node* start;
struct node* link1;
void List() {
    int a;
    cin>>a;
    head = (struct node*)malloc(sizeof(struct node));
    if(privious_node == NULL) {
        privious_node = head;
        start = privious_node;
        head->link=NULL;
        head->info = a;
    } else {
        head->info = a;
        head->link = NULL;
        privious_node->link =head;
        privious_node=head;
    }

}

int deletionInFirstNode() {
    int x;
    x = head->info;
    head = head->link;
    return x;
}

int deletionAtGivenNode(int previous_node, int given_node) {
    int item, x=1;
    while(head != NULL) {
        if(x == previous_node) {
            link1 = head;
        }
        if(x == given_node) break;
        x++;
        head=head->link;
    }
    item = head->info;
    link1->link = head->link;
    return item;
}

int deletionNodeOfGivenNumber(int x){
int item;
if(head->info == x) {
item = head->info;
head=head->link;
}else{
    while(head != NULL) {
        if(head->info == x) {
            item = x;
            break;
        } else {
            link1 = head;
        }
        head = head->link;
    }
    link1->link = head -> link;
    }
    return item;
}

int main() {
    int n;
    privious_node = NULL;
    cin>>n;
    while(n--) {
        List();
    }

    head = start;

    /*
    int item = deletionInFirstNode();
    cout<<item<<endl;
    */


    /*
    int item = deletionAtGivenNode(3,4);
    cout<<item<<endl;
    */

    int item = deletionNodeOfGivenNumber(6);
    cout<<item<<endl;

    head = start->link;
    while(head != NULL) {
        cout<<head->info<<" ";
        head = head->link;
    }

    return 0;

}
