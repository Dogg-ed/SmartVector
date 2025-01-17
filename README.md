# SmartVector
This class is a child class of vector and adds 3 useful methods

To use, simply type #include "SmartVector.h" at the top of your file
Further instruction on how to use each method can be found below

## index_of()
<details>

Returns the index of a specified object  

Parameter: T obj >> Object you want to find  

Returns: The index of the object, or -1 if the vector does not contain it

(Make sure your vector only contains objects of type T)  

Usage:
```cpp
int main() {
  SmartVector<string> vec;
  vec.push_back("5");
  cout << vec.index_of("5") << "\n"; //prints 0
  return 0;
}
```
</details>


## contains()
<details>
Parameter: T obj >> Object you want to find

Returns: A boolean, false if the vector does not contain T, true otherwise

Usage:
```cpp
int main() {
  SmartVector<string> vec;
  vec.push_back("5");
  cout << vec.contains("5") << "\n"; //prints 1
  return 0;
}
```
</details>

