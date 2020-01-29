#include <iostream>
using namespace std;

// header file for Pet Class
class Pet
{
public:
  //public member variables
  string name;
  int age;
  string type;
  double weight;

  //mutators for Pet
  void setName(string name);
  void setAge(int age);
  void setType(string type);
  void setWeight(double weight);
  //accessors for Pet
  string getName();
  int getAge();
  string getType();
  double getWeight();
};

// void mutator function to set the name of Pet
void Pet::setName(string petName)
{
  name = petName;
}
//void mutator function to set the age of Pet
void Pet::setAge(int petAge)
{
  age = petAge;
}
//void mutator function to set the type of Pet
void Pet::setType(string petType)
{
  type = petType;
}
// void mutator function to set the weight of pet
void Pet::setWeight(double petWeight)
{
  weight = petWeight;
}
// accessor function to return the name of pet
string Pet::getName()
{
  return name;
}
//accessor function to return the age of pet
int Pet::getAge()
{
  return age;
}
//acccessor function to return the type of pet
string Pet::getType()
{
  return type;
}
//accessor function to return the weight of pet
double Pet::getWeight()
{
  return weight;
}

int main()
{
  //creating first instance of Pet using mutator methods
  Pet pet1;
  pet1.setName("Max");
  pet1.setAge(6);
  pet1.setType("Dog");
  pet1.setWeight(355.4);
  //displaying details of first instance of Pet using accessor methods
  cout << "Name: " << pet1.getName() << endl;
  cout << "Age: " << pet1.getAge() << endl;
  cout << "Type: " << pet1.getType() << endl;
  cout << "Weight: " << pet1.getWeight() << endl;
  //creating second instance of Pet using mutator methods
  Pet pet2;
  pet2.setName("Bart");
  pet2.setAge(15);
  pet2.setType("Cat");
  pet2.setWeight(4.2);
  //displaying details of second instance of Pet using accessor methods
  cout << "Name: " << pet2.getName() << endl;
  cout << "Age: " << pet2.getAge() << endl;
  cout << "Type: " << pet2.getType() << endl;
  cout << "Weight: " << pet2.getWeight() << endl;

  return 0;

}
