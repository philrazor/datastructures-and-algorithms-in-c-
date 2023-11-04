 #include <iostream>
using namespace std ;

class linked_list{
  public :
  int value ;
  linked_list* pointer;
};

void print(linked_list* display){
  while (display!=NULL)
  {
    cout << display->value <<endl;
    display=display->pointer;
  }

}

int main(){
  linked_list* head =new linked_list();
  linked_list* second  =new linked_list();
  linked_list* third =new linked_list();

  head->value = 1 ;
  head->pointer = second;

  second->value = 2 ;
  second->pointer = third ;

  third->value = 3;
  third->pointer = NULL;

  print(head);

  return 0;
}
