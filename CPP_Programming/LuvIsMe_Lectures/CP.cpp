/*

* Swap
- swap(a, b)    => O(1)
? Swaps the value of variables a and b


<| <| <| <| <| <|                Integers              |> |> |> |> |> |>
* Max
- max(a, b)     => O(1)
- max({a, b, c, d, e...})   => O(n)
? Outputs maximum element out of given elements
* Min
- min(a, b)     => O(1)
- min({a, b, c, d, e...})   => O(n)
? Outputs minimum element out of given elements

<| <| <| <| <| <|                Strings               |> |> |> |> |> |>
* Size
- str.size()    => O(1)
? outputs the size of the string
* At
- str.at(0) === str[0]    => O(1)
? outputs the element at the given index in the string
* Append
- str.append("well") === str+="well"    => O(4) [4 = size of added string]
? added a string to already existing string
* Find
- str.find("a", startingIndex)
? Returns the index of the first character of the matched string in the original string, If its not found, it returns string::npos
* Erase
- s.erase()
? Erases whole string
- s.erase(idx)
? Erases all characters after idx
- s.erase(idx, k)
? Erases k characters after idx
- s.erase(itr)
? Erases character at given iterator
- s.erase(first, last)
? Erases character in range [first, last)
* Substr
- str.substr(3,2)   => O(n)
? prints the substring starting from index 3 in original string and of length 2
* Stoi
- stoi(str)     => O(n)
? converts string to integer if possible (1st letter is a number)



<| <| <| <| <| <|                 Maps                 |> |> |> |> |> |>
= It stores the data in form of Pairs
* Size
- size()
? Returns the number of elements in the map.
* Max_size
- max_size()
? Returns the maximum number of elements that the map can hold.
* Empty
- empty()
? Returns whether the map is empty.
* Insert
- insert({keyvalue, mapvalue})   => O(logN)
- insert({ { k1, v1 }, { k2, v2 } })        => O(k*logN)
? Adds a new element to the map.
* Find
- mp.find(key)      => O(log n)
? If the key is found, it returns an iterator to the position where the key is present in the map.If the key is not found, it returns an iterator to the end of the map
* Count
- mp.count(key)     => O(log n)
? Returns 1, if the key is present in the map container or Returns 0, if the key is not present in the map
* Erase
- erase(g)
? Removes the key ‘g’ from the map.
- erase(iterator position)
? Removes the element at the position pointed by the iterator.
* Clear
- clear()
? Removes all the elements from the map.
* Upper_Bound
- mp.upper_bound(key)   => O(log n)
? The function returns an iterator pointing to the immediate next element which is just greater than k. If the key passed in the parameter exceeds the maximum key in the container, then returned iterator points to map_name.end().
* Lower_Bound
- mp.lower_bound(key)   => O(log n)
? Returns an iterator to the element with smallest key greater than or equal to k.
? If all the keys in the map are less than k, returns iterator to the end of the map.
? If all the keys in the map are greater than k, returns iterator to the beginning of the range

<| <| <| <| <| <|                 Arrays               |> |> |> |> |> |>
* Sort
- sort(arr.begin(), arr.end());     => O(n log(n))
? sorts the element of the array in ascending order
- sort(arr.rbegin(), arr.rend());     => O(n log(n))
? sorts the element of the array in descending order
* Reverse
- reverse(arr.begin(), arr.begin());    => O(n)
? reverses the array




<| <| <| <| <| <|                Vectors               |> |> |> |> |> |>
* Push_Back
- vec.push_back(3);     => O(1)
? Adds element to the end of the vector
* Pop_Back
- vec.pop_back();     => O(1)
? Removes last element from the vector
* Resize()
- vec.resize(new_length)
? Used to increase of Decrease the size of the vector
* Unique()
- unique(vec.begin(), vec.begin() + vec.size())
? Used to remove duplicate consecutive values
* Find
- find(vec.begin(), vec.end(), key);    => O(n)
? Returns the pointer to the key in the vector, if it is not found, it returns the pointer of vec.end()
* Insert
- v.insert(pos, val)    => O(N logN)
? Insert single element 
- v.insert(pos, n, val)     => O(N logN)
? Insert multiple copies of an element
- v.insert(pos, first, last)    => O(N logN)
? Insert range of elements
* Max_Element
- *max_element(v.begin(), v.end())  => O(n)
? Returns an iterator to the largest element in the range
* Min_Element
- *min_element(v.begin(), v.end())  => O(n)
? Returns an iterator to the smallest element in the range


<| <| <| <| <| <|                  Sets                |> |> |> |> |> |>

*/