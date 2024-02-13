struct Node{
    public:
        Node *next;
        int val;
        Node(int v){
        this->val=v;
        this->next=NULL;
    }
};
class MyLinkedList {
public:
    Node* head;
    MyLinkedList() {
        head=NULL;
    }
    
    int get(int index) {
    Node* temp = head;
        
        while(index>0 && temp!=NULL){
            temp=temp->next;
            index--;
        }
        if(temp==NULL) return -1;
        return temp->val;    }
    
    void addAtHead(int val) {
        Node* n = new Node(val);
        if(head==NULL){
            head=n;
        }
        else{
            n->next = head;
            head = n;
        }
    }
    
    void addAtTail(int val) {    
    Node* newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;;
        }
    
    void addAtIndex(int index, int val) {
        Node* n =new Node(val);
        if(index==0){
            n->next=head;
            head= n;
            return ;
        }
        Node* temp = head;
        while (index > 1 && temp != NULL) {
            temp = temp->next;
            index--;
        }
        if (temp == NULL) return;
        n->next = temp->next;
        temp->next = n;
    }
    
    void deleteAtIndex(int index) {
       if (head == NULL) return;
        if (index == 0) {
            head = head->next;
            return;
        }
        Node* temp = head;
        while (index > 1 && temp != NULL) {
            temp = temp->next;
            index--;
        }
        if (temp == NULL || temp->next == NULL) return;
        temp->next = temp->next->next;
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