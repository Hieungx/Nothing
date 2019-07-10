#include <iostream>
using namespace std;
template <class T>
struct Node{
	T data;
	Node<T> *next;
};
template <class T>
class List{
	private:
		Node<T> *head;
	public:
		List(){
			head = 0;
		}
		void AddAnItem(T value){
			Node<T> *n = new Node<T>; 
			n->data = value;
			n->next = 0;
			if(head == 0){
				head = n;
			}else{
				Node<T> *p = head;	 
					while(p->next != 0) 
						p=p->next;	
					p->next = n;	
			}
		}
		void PrintAll()const{
			Node<T> *p = head;
			while(p!= 0){
				cout<<p->data<<" ";
				p=p->next;
			}
		}
		void Count(T value)const{
			Node<T> *p = head;
			int Count=0;
			while(p!=0){
				if(p->data == value){
					Count+=1;
				}
				p=p->next;
			}
			cout<<"So luong phan tu "<<value<<" la: "<<Count<<endl;
		}
		void OddAndEven()const{
			Node<T> *p = head;
			cout<<"Cac so le: ";
			while(p!=0){
				if(p->data % 2 !=0){
					cout<<p->data<<" ";
				}
				p=p->next;
			}
			p= head;
			cout<<"\nCac so chan: ";
			while(p!=0){
				if(p->data % 2 ==0){
					cout<<p->data<<" ";
				}
				p=p->next;
			}
			cout<<endl;		
		}
	
		void Check(T value)const{
			Node<T> *p = head;
			bool f;
			while(p!=0){
				if(p->data == value){
					f=true;
					break;
				}else{
					f=false;
				}
				p=p->next;
			}
			if(f==true)
				cout<<"Phan tu "<<value<<" co xuat hien\n";
			else
				cout<<"Phan tu "<<value<<" khong xuat hien\n";
			
		}
		void FindMin()const{
			Node<T> *p = head;
			T min=p->data;
			while(p!=0){
				if(min>p->data){
					min=p->data;
				}
				p=p->next;
			}
			cout<<"Min la: "<<min<<endl;
		}
		void FindMax()const{
			Node<T> *p = head;
			T max=p->data;
			while(p!=0){
				if(max<p->data){
					max=p->data;
				}
				p=p->next;
			}
			cout<<"Max la: "<<max<<endl;
		}
		void Length()const{
			int length = 0;
			Node<T> *p;
			for(p = head; p!= 0; p=p->next){
				length+=1;
			}
			cout<<"Length = "<<length;
		}
		Node<T>* GetNode(int pos){
			Node<T> *p= new Node<T>;
			if(p==0){
				return 0;
			}
			p->data = pos;
			p->next=0;
			return p;
		}
		void DeleteAnItem(T value){
			Node<T> *p=head;
			if(head->data==value){
				Node<T> *t=head;
				head=head->next;
				delete t;
			}else{
				while(p->next!=0){
					if(p->next->data==value){
						Node<T> *t=p->next;
						p->next=p->next->next;
						delete t;
					}else
						p=p->next;
				}
			}
		}
		void DeletePos(int pos){
			if(pos==1){
				Node<T> *p=head;
				head=head->next;
				delete p;
			}else{
				Node<T> *p=head;
				for(int i=1;i<pos-1;i++){
					p=p->next;
				}
				Node<T> *t=p;
				t=p->next;
				p->next=p->next->next;
				delete t;
			}
		}
		/*void Swap(int pos1, int pos2){
			Node<T> *p=head;
			Node<T> *q=head;
			for(int i=1;i<pos1;i++){
				q=q->next;
			}
			for(int i=1;i<pos2;i++){
				p=p->next;
			}
			Node<T> *t = p;
			p=q;
			q=t;
		}*/
		void InsertApos(int pos, T value){
			Node<T> *p = new Node<T>;
			p->data = value;
			Node<T> *q = head;
			if(pos==1){
				
			}
			else{
				for(int i=1;i<pos-1;i++){
					q = q -> next;
				}
				p->next = q->next;
				q->next = p;
			}
		}
};

