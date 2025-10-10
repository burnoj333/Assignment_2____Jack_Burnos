The project is not meant to be interacted with by the user. I considered a menu function but thought the
pre determined tests I included in the main showcased the functions well. 

For the linked list portion of the project, a linked list object is created and 
preloaded with the values 43,61,55,23,82, and 90 using the push front and push back operations.
This shows that appropriate order is maintained when using push front/back interchangably.
<img width="889" height="414" alt="Screenshot (59)" src="https://github.com/user-attachments/assets/6346d573-76c8-4f6c-8b15-c08f01a5c31a" />
<img width="1920" height="542" alt="Screenshot (50)" src="https://github.com/user-attachments/assets/a8b49586-bf29-4f68-a5a0-f746d2343a10" />

I went on to show the functionality of the fuctions returning the front and back. 
43 and 90 were displayed.

<img width="1920" height="726" alt="Screenshot (51)" src="https://github.com/user-attachments/assets/d34e0bde-13ec-4b21-a7f6-abe02089f2d4" />

I called pop front on the list. 43 was displayed and removed from the list.
I also returned the front value to the user to show the new front.
The updated list was shown.

<img width="1920" height="1200" alt="Screenshot (52)" src="https://github.com/user-attachments/assets/d95772d7-c024-4156-89e8-a74b9df022be" />

The same was done for pop back. The old back was shown, removed, and the new back was shown.
An updated list was shown now with 4 values.

<img width="1920" height="1200" alt="Screenshot (53)" src="https://github.com/user-attachments/assets/769bcf11-f0ee-4fd8-be62-c5cbc6215981" />

I inserted new values to the list. Value 65 at index 3, 99 at index 0, and 34 to index 13. 99 being inserted at zero was meant to show the capabilities of 
wanting to add to the front without using pushFront. 34 at index 13 was meant to show that an out of range index would append to the back. 
The new list was shown.

<img width="1250" height="640" alt="Screenshot (54)" src="https://github.com/user-attachments/assets/0515f0ba-c5a0-4644-ac00-ed07abab0503" />

I removed indices 4, 0 and 16. Removing index 0 was meant to show the capability of removing the head element 
without using popFront. Removing index 16 was meant to show that the index is out of range and nothing is removed. 
This triggered an error message and was handled. The list was shown and it was back to being 5 elements. 

<img width="1116" height="762" alt="Screenshot (55)" src="https://github.com/user-attachments/assets/dee1659b-d256-45a1-8598-aa028139fe52" />

In finding the elements, I tested with the values 61, 82, and 777. Testing for 61 was meant to show that items can be found if at beginning
of the list. Testing for 777 was meant to show that looking for an item that does not exist returns the size of the list, in this case, 5.

<img width="1100" height="440" alt="Screenshot (56)" src="https://github.com/user-attachments/assets/6ee08017-f916-4845-a142-e8d1950073c4" />

I emptied the list. My print function which iterates the list and prints all data 
sequentially was called and did not print anything besides the error message.

<img width="604" height="471" alt="Screenshot (57)" src="https://github.com/user-attachments/assets/a4ebba5e-7e16-43c3-aee5-e41a4ef3f16f" />

For the stack portion of the program, a class was added to the same header and cpp files defining this stack. 






