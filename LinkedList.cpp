/** Implementation file for the class LinkedList.
 @file LinkedList.cpp */

//#include "LinkedList.h"  // Header file
#include "PrecondViolatedExcep.h"
  
template<class ItemType>
LinkedList<ItemType>::LinkedList() : headPtr(NULL), itemCount(0)
{
}  // end default constructor


/******* CHANGE COPY TO CONSTRUCTOR IMPLEMENTATION TO A RECURSIVE IMPLEMENTATION ************
 ******* NOTE: YOU CAN CREATE A HELPER METHOD, AND THE HELPER METHOD DOES THE RECURSION WORK *********/
template<class ItemType>
LinkedList<ItemType>::LinkedList(const LinkedList<ItemType>& aList) : itemCount(aList.itemCount)
{
   Node<ItemType>* origChainPtr = aList.headPtr;  // Points to nodes in original chain
   template<class ItemType>
   Node<ItemType>* copy(Node<ItemType>* n)  //recursive copy helper function definition
   {
	   if (Node<ItemType>* n == NULL)
		   return NULL;
	   else return new Node(Node<ItemType>* n->getItem, copy(Node<ItemType>* n->getNext();)
   }

   
   copy(origChainPtr); //calling the recursive helper function
      
}  // end copy constructor

template<class ItemType>
LinkedList<ItemType>::~LinkedList()
{
   clear();
}  // end destructor

template<class ItemType>
bool LinkedList<ItemType>::isEmpty() const
{
   return itemCount == 0;
}  // end isEmpty

template<class ItemType>
int LinkedList<ItemType>::getLength() const
{
   return itemCount;
}  // end getLength

template<class ItemType>
bool LinkedList<ItemType>::insert(int newPosition, const ItemType& newEntry)
{
   bool ableToInsert = (newPosition >= 1) && (newPosition <= itemCount + 1);
   if (ableToInsert)
   {
      // Create a new node containing the new entry 
      Node<ItemType>* newNodePtr = new Node<ItemType>(newEntry);  
      
      // Attach new node to chain
      if (newPosition == 1)
      {
         // Insert new node at beginning of chain
         newNodePtr->setNext(headPtr); 
         headPtr = newNodePtr;
      }
      else
      {
         // Find node that will be before new node
         Node<ItemType>* prevPtr = getNodeAt(newPosition - 1);
         
         // Insert new node after node to which prevPtr points
         newNodePtr->setNext(prevPtr->getNext()); 
         prevPtr->setNext(newNodePtr);
      }  // end if

      itemCount++;  // Increase count of entries
   }  // end if
   
   return ableToInsert;
}  // end insert

template<class ItemType>
bool LinkedList<ItemType>::remove(int position)
{
   bool ableToRemove = (position >= 1) && (position <= itemCount);
   if (ableToRemove)
   {
      Node<ItemType>* curPtr = NULL;
      if (position == 1)
      {
         // Remove the first node in the chain
         curPtr = headPtr; // Save pointer to node
         headPtr = headPtr->getNext();
      }
      else
      {
         // Find node that is before the one to delete
         Node<ItemType>* prevPtr = getNodeAt(position - 1);
         
         // Point to node to delete
         curPtr = prevPtr->getNext();
         
         // Disconnect indicated node from chain by connecting the
         // prior node with the one after
         prevPtr->setNext(curPtr->getNext());
      }  // end if
      
      // Return node to system
      curPtr->setNext(NULL);
      delete curPtr;
      curPtr = NULL;
      
      itemCount--;  // Decrease count of entries
   }  // end if
   
   return ableToRemove;
}  // end remove

template<class ItemType>
void LinkedList<ItemType>::clear()
{
   while (!isEmpty())
      remove(1);
}  // end clear

template<class ItemType>
ItemType LinkedList<ItemType>::getEntry(int position) const throw(PrecondViolatedExcep)
{
   // Enforce precondition
   bool ableToGet = (position >= 1) && (position <= itemCount);
   if (ableToGet)
   {
      Node<ItemType>* nodePtr = getNodeAt(position);
      return nodePtr->getItem();
   }
   else
   {
      std::string message = "getEntry() called with an empty list or ";
      message  = message + "invalid position.";
      throw(PrecondViolatedExcep(message)); 
   }  // end if
}  // end getEntry

template<class ItemType>
void LinkedList<ItemType>::replace(int position, const ItemType& newEntry) throw(PrecondViolatedExcep)
{
   // Enforce precondition
   bool ableToSet = (position >= 1) && (position <= itemCount);
   if (ableToSet)
   {
      Node<ItemType>* nodePtr = getNodeAt(position);
      nodePtr->setItem(newEntry);
   }
   else
   {
      std::string message = "replace() called with an invalid position.";
      throw(PrecondViolatedExcep(message)); 
   }  // end if
}  // end replace

template<class ItemType>
Node<ItemType>* LinkedList<ItemType>::getNodeAt(int position) const
{
   // Debugging check of precondition
   // assert( (position >= 1) && (position <= itemCount) );

   
   // Count from the beginning of the chain
	try // trying to count from the beginning of the chain
	{
		if (position < 1 || position > itemCount)
		{
			//throwing an error if the old assert statement is violated
			throw PrecondViolatedExcep("Position must be greater than or equal to 1 and position must be less than or equal to itemcount"); // precondition violation
		}
		else
		{
			Node<ItemType>* curPtr = headPtr;
			for (int skip = 1; skip < position; skip++)
				curPtr = curPtr->getNext();

			return curPtr;
		}
	}
	catch (PrecondViolatedExcep* e) // catching the error , if thrown
	{
		cout << e.what() << endl; // cout the error exception message formatted with the thrown string
	}
}  // end getNodeAt

// print items from each node
template<class ItemType>
void LinkedList < ItemType::displayList()
{
	Node<ItemType>* curPtr = headPtr;
	// traverse the linked list and cout the getItems until curPtr becomes NULL
	while (curPtr != NULL)
	{
		cout << curPtr->getItem() << endl;
		curPtr = curPtr->getNext();
	}
}
//  End of implementation file.
