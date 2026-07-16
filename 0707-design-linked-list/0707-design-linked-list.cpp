class Node{
    public:
        int value;
        Node* next;

        Node(){}
        Node(int val){
            value=val;
            next=nullptr;
        }
};

class MyLinkedList {
public:
    Node* head;
    Node* tail;
    int length;
    MyLinkedList() {
        head=tail=nullptr;
        length=0;
    }
    
    int get(int index) {

        if(index<0 || index>=length) return -1;
        Node* temp=head;
        for(int i=0;i<index;i++){
            temp=temp->next;
        }
        return temp->value;
    }
    
    void addAtHead(int val) {
        Node* newNode = new Node(val);
        if(head==nullptr) head=tail=newNode;
        else{
            newNode->next=head;
            head=newNode;}
        length++;
    }
    
    void addAtTail(int val) {
        Node* newNode = new Node(val);
        if(head==nullptr) head=tail=newNode;
        else{
            tail->next=newNode;
            tail=newNode;}
        length++;
    }
    
    void addAtIndex(int index, int val) {
        if(index<0 || index>length) return;
        Node* temp=head;
        if(index==0){
            addAtHead(val);
            return;
        } 
        if(index==length){
            addAtTail(val);
            return;
        } 
        for(int i=0;i<index-1;i++){
            temp=temp->next;
        }
        Node* newNode=new Node(val);
        newNode->next=temp->next;
        temp->next=newNode;
        length++;
    }
    
    void deleteAtIndex(int index) {
        if(index<0 || index>=length) return;
        if(index==0){
            Node* temp=head;
            head=head->next;
            if(length==1) tail=nullptr;
            delete temp;
            length--;
            return;
        }
        Node* temp=head;
        for(int i=0;i<index-1;i++){
            temp=temp->next;
        }
        Node* temp1= temp->next;
        temp->next=temp1->next;
        if(temp1==tail) tail=temp;
        delete temp1;
        length--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */