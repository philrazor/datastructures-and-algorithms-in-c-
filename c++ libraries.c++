#include <iostream>
#include <vector>
#include <string>

using namespace std ;

/*class Person{
  public :
  Person(int age ,int marks){
    cout << "person contructor "<< endl; 
  }
  explicit Person(int legs ,int eyes ,int kidneys){
    cout << "explicit Person constructor"<< endl ;
  }
};
*/

auto name = "phil" ;

int main(){
  // cout << name <<endl ;
  // // // auto keyword is used to declaire a variable without having to specifi the data type .
  // // //  catch is the initialization should be done during variable declaration .
  // auto out = [] (int) -> bool {}; 
  // cout << out <<endl ;

  // // // initialization of objects and variables
  // // // this initializer forces the so called intialization b declaring  0 to local variables and nullptr to pointers
  // int values[5] {1,23,34,5,6};
  // vector <int> valus {1,2,3,4,5,5};
  // static auto newValue = values ;
  // vector <string> cities {"nairobi", "mombasa" ,"kajiado"} ;

  // int nullInitialized ; //initialized to null 
  // int zeroInitialized{} ;//initialized to 0
  // int * pointerNull ; //initialized to null 
  // int *pointerPtrNull{} ; //initialized to nullptr

  // // // narrow initialization with braces is not possible maybe  (try using the = operator,also not working)

  // int value1{5} ;
  // int value2{5.2} ; error due to narrowing 
  //  int value3 = 5.0 ;

  // cout << "value1" <<value1 <<endl;
  // // cout << "value2" <<value2 <<endl;
  // // cout << "value3" <<value3 <<endl;
  
  // // std::initializer_list <> is a class provided by the verson of c++ to initialize value of a user defined data type
  // void print(std::initializer_list<string> names){
  //   for (auto i =names.begin() ; i!=names.end() ;++i){
  //     cout << *i << endl ;
  //   }
  // }
  // print(1,2,3,4,5);
  // when there are  contructors for both specific number of arguments and the initializer list ,the preference becomes the initializer list
  // but when there is no initializer list passed in class calling the initializer object would be invalid i.e People initObj{1,2}
  // due to initializer explicit becomes relevant for contructors taking more than one argument ::check class Person above

  // Person person1{2,4} ;
  // Person person2{2,4,5} ;
  // Person person3 = {2,3,5} ; error due to explicit 


  //for loop /foreach in other languages
  // for (declaration : collection ){statement}
  // for (string names: {"philip","eva","caro"}){
  //   cout << names<< endl ;
  // }
  vector <int> numbers{2,3,4,5,6,8};
  // for(auto& numbers :numbers){
  //   numbers*=3;
  //   cout << "number multiply by three: " <<numbers << endl ;
  // }
//declaring the auto element as reference is imprortant to avoid calling the copy constructor and destructor of each element instead declare the current element as the reference 
  // initializer_list <int> age{2,3,4,5,6,7,8};
  // for(auto & obj : age){
  //   cout << "initialzer_list: " << obj+2 << endl;
  // }
  // cout << "size of list"<< size(age) << endl;
}

