# SmartVector
This class is a child class of vector and adds 3 useful methods

To use, simply type #include "SmartVector.h" at the top of your file
Further instruction on how to use each method can be found below

## index_of()
<details>

Returns the index of a specified object  

Parameter -->  

T obj: Object you want to find  

(Make sure your vector only contains objects of type T)  


```cpp
SmartVector<string> vec;
vec.push_back("5");
cout << vec.index_of("5") << "\n"; //prints 0
```

</details>
