#include<bits/stdc++.h>
using namespace std;
struct node {
    int info;
    struct node* link;
};
struct node* head;
struct node* privious_node;
struct node* start;

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

void insertionInFirstNode(int item) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->info = item;
    newNode->link = start;
    start = newNode;
}

void insertionAfterGivenNode(int item,int position) {
    int x =1;
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    while(head != NULL) {
        if(x != position) head = head->link;
        else {
            newNode->info = item;
            newNode->link = head->link;
            head->link = newNode;
            break;
        }
        x++;
    }
}

void insertion_for_sorted_list(int item) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->info = item;
    privious_node = head;
    while(head != NULL) {
        if(head->info < item) {
            privious_node = head;
            head= head->link;
        } else {
            newNode->link = head;
            privious_node->link = newNode;
            break;
        }

    }

}

int main() {
    int n;
    privious_node = NULL;
    cin>>n;
    while(n--) {
        List();
    }

    int item = 4;
    //insertionInFirstNode(item);
    head = start;
    int position = 4;
    struct node* link1= start;
    //insertionAfterGivenNode(item,position);

     insertion_for_sorted_list(item);

    while(link1!= NULL) {
        cout<<link1->info<<" ";
        link1 = link1->link;

    }

    return 0;

}
