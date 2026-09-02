# Object-Oriented Programming (OOP) – Interview Questions & Answers
 ---
## 1. What is Object-Oriented Programming (OOP)? Explain with Example.
### Answer:
Object-Oriented Programming (OOP) is a way of writing programs using classes and objects. It represents real-world entities as objects.

A class is a blueprint that contains data (variables) and methods (functions). An object is an instance of a class.

We can create multiple objects from a single class. Each object has its own copy of data but shares the same methods.

### OOP is based on four main pillars: 

- Encapsulation
- Abstraction
- Inheritance
- Polymorphism

### OOP improves: 

- Code reusability
- Modularity
- Security
- Maintainability

### Example:
Student is a class with data like:

- name
- age
- roll number

And methods like:

- study()
- giveExam()

We can create multiple objects like:

- student1
- student2

Each object will have its own data but share the same methods.

---

## 2. What are the Advantages and Disadvantages of Object-Oriented Programming (OOP)?
### Answer:
### Advantages of OOP:

- Easy to Manage and Maintain – The program is divided into classes, making it easier to manage, update, and maintain.

- Modularity – The program is divided into small parts (classes).

- Reusability – Achieved using inheritance, which avoids code duplication.

- Flexibility – Achieved using polymorphism, allowing one interface to have multiple implementations.

- Security – Achieved using encapsulation, which hides internal data and restricts direct access.

### Disadvantages of OOP:

- Complex for Beginners – Concepts like class, object, inheritance, and polymorphism can be difficult to understand.

- More Memory Usage – Requires more memory due to object creation.

- Slower Execution – Slightly slower due to object handling.

- Not Suitable for Small Programs – For very small programs, OOP may not be necessary.

- Time-Consuming Development – Proper design and planning are required.

---

## 3. What are some commonly used Object-Oriented Programming (OOP) languages?
### Answer:
### Some commonly used object-oriented programming languages are:

- C++
- Java
- Python
- C#
- Ruby
- Swift
- PHP

### These languages support OOP concepts like:

- Encapsulation
- Inheritance
- Polymorphism
- Abstraction

---

## 4. List the features of Object-Oriented Programming (OOP).
### Answer:
- Class and Object – Basic concepts of OOP used to represent real-world entities.

- Inheritance – Provides reusability and avoids code duplication.

- Encapsulation – Hides internal data and restricts direct access to improve security.

- Polymorphism – Allows one interface to have multiple implementations, providing flexibility.

- Abstraction – Hides internal implementation details and shows only essential information to the user.

---

## 5. Difference between Procedure-Oriented Programming (POP) and Object-Oriented Programming (OOP)
### Answer:

### Procedural-Oriented Programming (POP) – Theory

- Everything is mainly based on functions.
- The program is divided into multiple functions, which are executed step by step.
- Example (real-world): Making Tea
Boil water
   ↓
Add tea powder and sugar
   ↓
Add milk
   ↓
Pour the tea

- Suitable for small, task-based programs.
- Data and functions are separate.
- No objects are required.
- Functions operate on data separately.
- Data is generally not encapsulated inside objects.
- There is less data hiding compared with OOP.
- Key Point:In POP, data and functions are generally independent of each other.

### Procedural-Oriented Programming (POP) – C++ Example
```cpp
#include <iostream>
using namespace std;

string name = "Pratibha";
int marks = 90;

void display()
{
    cout << name << " scored " << marks;
}

int main()
{
    display();

    return 0;
}
```

### Output:
Pratibha scored 90

**Explanation:** Data (name and marks) is separate from the method (display). No objects are created. Any function can access the data directly.

---

### Object-Oriented Programming (OOP) – Theory

- Programs are written using classes and objects, representing real-world entities.
- Classes define data and functions, while objects represent actual instances containing their own data.
Example (real-world): Student Class
- A student has:
Data:name,age,roll number,marks

- A student can:
Functions:study(),giveExam(),display()

- We can create multiple objects:
Student s1
Student s2
Student s3

Each object can have its own data.

### Main pillars:
1. Encapsulation
2. Inheritance
3. Polymorphism
4. Abstraction

- Data and functions are grouped together in classes.
- Objects are created from classes.
- Access to data can be controlled using private, protected, and public.
- Improves data hiding and abstraction.
- Key Point:In OOP, related data and functions are grouped together inside classes, and objects are used to work with them.

### Object-Oriented Programming (OOP) – C++ Example
```cpp
#include <iostream>
using namespace std;

class Student
{
public:
    string name = "Pratibha";
    int marks = 90;

    void display()
    {
        cout << name << " scored " << marks;
    }
};

int main()
{
    Student s1;

    s1.display();

    return 0;
}
```

### Output:
Pratibha scored 90

### Explaination:
Data and methods are together inside the Student class. Object s1 is created from the class and uses the display() method to access its data. Since the data members are public, they can be accessed directly through the object.

---

## 6. Explain the concept of Class with example
### Answer:

A class is a user-defined data type that is used to group related data and methods together under a single unit called a class.

A class defines the structure of data and methods, but the actual data is stored when objects are created.

We can create multiple objects from the same class.

Each object uses the data and methods defined in its class.

### Example:
Suppose we have a Student class:

#### Data:
- name
- age
- rollNo

#### Methods:
- giveExam()
- display()

The class is used to define the data and methods. Objects created from the class store their own actual data and use the methods defined in the class.

### Syntax:
```cpp
class ClassName
{
    // Data members
    // Member functions
};
```

### Code Example:
```cpp
#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;

    void takeExam()
    {
        cout << name << " is taking the exam";
    }
};

int main()
{
    Student s1;    // Creating an object

    s1.name = "Pratibha";
    s1.age = 20;

    s1.takeExam();

    return 0;
}
```

### Output:
Pratibha is taking the exam

### Explanation:
The Student class defines the data (name, age) and the method (takeExam()).
The object s1 is created from the Student class. It stores the actual data and uses the takeExam() method to perform the action.

### Key Point :
Class = Blueprint, Object = Actual instance created from the blueprint.

---

## 7. What is the Syntax of Creating a Class?
### Answer:

### Syntax:
```cpp
class ClassName
{
    // Data members
    // Member functions
};
```
### Note:
 In C++, access specifiers such as public, private, and protected are written inside the class.

### Example:
```cpp
#include <iostream>
using namespace std;

class Student
{
public:
    string name;   // Data member
    int age;       // Data member

    void displayStudent()   // Member function
    {
        cout << "Name: " << name << ", Age: " << age;
    }
};
```

### Explanation:
- class Student → declares a class named Student.
- public: → makes the following members accessible from outside the class.
- string name; and int age; → data members.
- void displayStudent() → member function used to display student details.
- }; → ends the class definition. The semicolon is required.

---

## 8. Explain the Concept of Object with Example
### Answer:

An object is an instance of a class that is used to store actual data defined by the class and to use its member functions.

We can create multiple objects of the same class.

Each object has its own data, but all objects use the member functions defined in their class.

### Example:

Suppose we have a Car class:

#### Data:
- name
- color

#### Methods:
- speed()
- drive()

We can create multiple objects from the Car class.

#### Object 1:
name: Tesla
color: Red
Methods: speed(), drive()

#### Object 2:
name: Rolls Royce
color: White
Methods: speed(), drive()

Each object stores its own data, but both objects use the methods defined in the Car class.

### Syntax:
ClassName objectName;

### Example:
Car car1;

Here:
Car  → Class
car1 → Object

### Code Example:
```cpp
#include <iostream>
using namespace std;

class Car
{
public:
    string name;
    string color;

    void drive()
    {
        cout << name << " is driving" << endl;
    }

    void speed()
    {
        cout << name << " is running fast" << endl;
    }
};

int main()
{
    Car car1;    // Object 1

    car1.name = "Tesla";
    car1.color = "Red";

    car1.drive();
    car1.speed();

    Car car2;    // Object 2

    car2.name = "Rolls Royce";
    car2.color = "White";

    car2.drive();
    car2.speed();

    return 0;
}
```

### Output:
Tesla is driving
Tesla is running fast
Rolls Royce is driving
Rolls Royce is running fast

### Explanation:
Car is the class that defines the data (name, color) and methods (drive(), speed()).

car1 and car2 are objects of the Car class. Each object stores its own data.

car1 stores:

name  → Tesla
color → Red

car2 stores:

name  → Rolls Royce
color → White

Both objects use the same methods defined in the Car class to perform their actions.

### Key Point:
Class = Blueprint, Object = Actual instance of the class.

---

## 9. What is the Syntax of Creating an Object?
### Syntax:
ClassName objectName;

### Explanation:

- ClassName – the name of the class for which you want to create an object.

- objectName – the name given to the object.

- ; – statement terminator.

### Accessing Object Members:

To access a data member:
objectName.variableName;

To access a member function:
objectName.methodName();

### Example:
```cpp
Student s1;

s1.name = "Pratibha";       // Accessing data member
s1.displayStudent();       // Accessing member function

Car car1;

car1.name = "Tesla";       // Accessing data member
car1.drive();              // Accessing member function
```

- s1 is an object of the Student class.
- car1 is an object of the Car class.
- The dot (.) operator is used to access public data members and member functions through an object.

---

## 10. Difference Between Class and Object in C++
### Answer:
| S.No. | Class                                                                                    | Object                                                                              |
| :---: | ---------------------------------------------------------------------------------------- | ----------------------------------------------------------------------------------- |
|   1   | A class is a user-defined data type used to define data and methods under a single unit. | An object is an instance of a class used to store actual data defined in the class. |
|   2   | **Syntax:** `class ClassName { data; methods; };`                                        | **Syntax:** `ClassName objectName;`                                                 |
|   3   | A class defines data and methods; it does not store actual object data.                  | An object stores its own data and can use the class methods.                        |
|   4   | A class is like a blueprint or template.                                                 | An object is a real instance created from the class blueprint.                      |
|   5   | One class can be used to create multiple objects.                                        | Each object has its own copy of non-static data members.                            |

---

## Q1. What are data members?
Variables declared inside a class are called data members.

### Example:
```cpp
class Student
{
public:
    string name;
    int age;
};
```

name and age are data members.

---

## Q2. What are member functions?
Functions declared inside a class are called member functions.

### Example:
```cpp
void display()
{
    cout << "Hello";
}
```

---

## Q3. Can different objects of the same class have different values?
Yes.
```cpp
s1.age = 20;
s2.age = 21;
```
Both belong to the same class but contain different data.

---

## Q4. How do you access public members of a class?
Using the dot operator (.).
```cpp
s1.name;
s1.display();
```
---

## 11.Types of Access Specifiers

## 1.Public:
Public members can be accessed from anywhere using an object.
### Example:
```cpp
#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;

    void display()
    {
        cout << name << " " << age << endl;
    }
};

int main()
{
    Student s1;

    // Accessing public data members
    s1.name = "Pratibha";
    s1.age = 21;

    // Accessing public member function
    s1.display();

    return 0;
}
```
### OUTPUT:
Pratibha 21

---

## 2.Private:
Private members can be accessed directly only inside the same class.

They cannot be accessed directly using an object from outside the class.
### Example:
```cpp
#include <iostream>
using namespace std;

class Student
{
private:
    int marks;

public:
    void setMarks(int m)
    {
        marks = m;
    }

    void displayMarks()
    {
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s1;

    // s1.marks = 90;   //  Error: marks is private

    s1.setMarks(90);     //  Access through public function
    s1.displayMarks();   //  Access through public function

    return 0;
}
```
### OUTPUT:
Marks: 90

---

## 3.Protected:
Protected members can be accessed inside the class and directly inside its derived (child) classes, but not directly
 from outside using an object.

 ### Example:
 ```cpp
 #include <iostream>
using namespace std;

class Student
{
protected:
    int marks;
};

class Result : public Student
{
public:
    void setMarks()
    {
        marks = 90;   // Allowed
    }

    void display()
    {
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Result r1;

    // r1.marks = 90;   //  Not allowed from outside

    r1.setMarks();       //  Public function
    r1.display();       //  Public function

    return 0;
}
```
### OUTPUT:
Marks: 90

---

## 12.Explain what is constructor with example and syntax
### Answer:
- A constructor is a special member function of a class that is automatically called when an object is created.

- Its main purpose is to initialize the data members of an object.

- Constructor = A special function that automatically runs when an object is created.

### Example (Analogy):

Buying a new phone is like creating an object: When you turn it on, it automatically asks for default settings like date, time, wallpaper, etc. You don't need to manually set these at the time of object creation — just like constructor automatically initializes object data.

### Syntax:
```cpp
class ClassName
{
public:

    ClassName()
    {
        // Initialization
    }
};
```
### Code Example:
```cpp
#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;

    // Constructor
    Student()
    {
        name = "Pratibha";
        age = 21;
    }
};

int main()
{
    Student s1;

    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;

    return 0;
}
```
### OUTPUT:
```cpp
Name: Pratibha
Age: 21
```

### Explanation:
 Student() is the constructor of the Student class.

When we write:Student s1;

the constructor is automatically called.

```cpp 
It initializes:name = "Pratibha";
                       age = 21;
                       ```
 When we print s1.name and s1.age, we get the initialized values.

 ### Properties of Constructor

1. Constructor has the same name as the class
```cpp
class Student
{
public:
    Student()
    {
    }
};
```
2. Constructor has no return type

 - Wrong:
 ```cpp
int Student()
{
}
```
- Correct:
```cpp
Student()
{
}
```
3. Constructor is automatically called
```cpp
Student s1;
```
You don't need to write:s1.Student();

The constructor is automatically called when s1 is created.

4. A class can have multiple constructors

This is called constructor overloading.

5. Constructors are mainly used for initialization

### For example:
```cpp
Student()
{
    name = "Pratibha";
    age = 21;
}
```
---

 ## 13.List Types of Constructor in OOP
### Answer:
Types of Constructors in OOP:

1. Default Constructor
2. Non-Parameterized Constructor
3. Parameterized Constructor
4. Copy Constructor
- Shallow Copy
- Deep Copy
### Note:
 Copy Constructor is available in C++ but not in Java.

---

## 14. Explain Default Constructor with Example
### Answer:

- A default constructor is a constructor that does not take any arguments.

- It is automatically called when an object is created without arguments.

- It is used to initialize an object with default values when the object is created.

- Default Constructor = Constructor without parameters.

### Syntax
```cpp
class ClassName
{
public:

    ClassName()
    {
        // Default values
    }
};
```
### Example:
```cpp
#include <iostream>
using namespace std;

class Car
{
public:
    string brand;
    int speed;

    Car()
    {
        brand = "Unknown";
        speed = 0;
    }
};

int main()
{
    Car c1;

    cout << "Brand: " << c1.brand << endl;
    cout << "Speed: " << c1.speed << endl;

    return 0;
}
```
### OUTPUT:
```cpp
Brand: Unknown
Speed: 0
```
### Note:
- Compiler-Provided Default Constructor
If you do not write any constructor in your class, C++ can provide a default constructor automatically.

### Example:
```cpp
class Student
{
public:
    string name;
    int age;
};
```
You can create:Student s1;

---

## 15.Constructor vs Default Constructor
| Constructor                                  | Default Constructor                            |
| ------------------------------------------   | --------------------------------------------   |
| - General term for a special member function | - A constructor with **no parameters**         |
| - Used to initialize objects                 | - Used to initialize objects with no arguments |
| - Can have parameters                        | - Does not have parameters                     |
| - Example: `Student(int a)`                  | - Example: `Student()`                         |

---

## 16. Explain Parameterized Constructor with Example
### Answer:
- A parameterized constructor is a constructor that accepts parameters to initialize an object's data with specific values when the object is created.

- Parameterized Constructor = Constructor that takes values while creating an object.

### Syntax
```cpp
class ClassName
{
public:
    ClassName(dataType parameter1, dataType parameter2)
    {
        // Initialize data members
    }
};
```
### Example
```cpp
#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;

    // Parameterized Constructor
    Student(string n, int a)
    {
        name = n;
        age = a;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Student s1("Pratibha", 21);

    s1.display();

    return 0;
}
```
### OUTPUT:
```cpp
Name: Pratibha
Age: 21
```

### Explanation:

Student(string n, int a) is a parameterized constructor because it accepts two parameters.

When we create the object:Student s1("Pratibha", 21);

"Pratibha" is passed to n.
21 is passed to a.

---

## Q5. Why do we use a parameterized constructor?
### Answer:
We use a parameterized constructor to initialize objects with different values at the time of object creation.

### Example:
```cpp
Student s1("Pratibha", 21);
Student s2("Rahul", 22);
```
---

## Q6. What is the difference between a default constructor and a parameterized constructor?
### Answer:
| Default Constructor             | Parameterized Constructor        |
| ------------------------------- | -------------------------------- |
| - **Takes no parameters**         | - **Takes one or more parameters** |
| - `Student()`                     | - `Student(string n, int a)`       |
| - Initializes with default values | - Initializes with given values    |

---

## Q7. Can a class have both default and parameterized constructors?
### Answer:
Yes. A class can have both(this is example of constructor overloading)

### Example:
```cpp
class Student
{
public:

    Student()
    {
        cout << "Default Constructor";
    }

    Student(string name)
    {
        cout << "Parameterized Constructor";
    }
};
```
---

## Q8. What happens if we have only a parameterized constructor and write this?
Student s1;

### Answer:
It gives a compilation error because there is no constructor that takes zero arguments.
If you want:Student s1;
you need a default constructor.

---

## Q9. Can a parameterized constructor return a value?
### Answer:
No. Constructors do not have a return type, not even void.

---

## 17. Explain Copy Constructor with Example 
###  Answer: 
- A copy constructor is a special constructor that creates a new object by copying the data of an existing object.

- Copy Constructor = Creates a new object by copying another object's data.

### Example:
Suppose you have a Student record:
Student s1
Name = Pratibha
Age = 21
Marks = 90

Now you want to create another student object with the same information.

Instead of assigning every value separately, you can copy s1:

s1
 ↓
Copy Constructor
 ↓
s2

Now:

s1 → Pratibha, 21, 90
s2 → Pratibha, 21, 90

Both objects contain the same data.


















