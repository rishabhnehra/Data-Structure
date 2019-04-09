#Udacity way
class Element:

	def __init__(self, value):
		self.value = value
		self.next = None

class LinkedList:

	def __init__(self, head=None):
		self.head = head

	def append(self, new_element): #The last Element should point to Nones
		if self.head:
			current = self.head
			while current.next:
				current = current.next
			current.next = new_element
		else:
			self.head = new_element

	def get_position(self, position): #LinkedList.ll1.get_position(4)
		counter = 1
		current = self.head
		while position != counter:
			current = current.next
			counter += 1
		return current

	def insert(self, new_element, position):
		counter = 1
		current = self.head
		if position == 1:
			new_element.next = self.head
			self.head = new_element
		else:
			while counter < position - 1:
				current = current.next
				counter += 1
			new_element.next = current.next
			current.next = new_element

	def printLinkedList(self):
		current = self.head
		while current:
			print current.value
			current = current.next

	def delete(self, value):#Two pointers are required for previous and curent node
		if self.head.value == value:
			self.head = self.head.next
		else:
			while current.value != value:
				previous = current
				current = current.next
			previous.next = current.next


if __name__ == '__main__':
	# Test cases
	# Set up some Elements
	e1 = Element(1)
	e2 = Element(2)
	e3 = Element(3)
	e4 = Element(4)

	# Start setting up a LinkedList
	ll = LinkedList()
	ll.head = e1
	ll.append(e2)
	ll.append(e3)

	# Test get_position
	# Should print 3
	print ll.head.value
	# Should also print 3
	# print ll.get_position(3).value

	# # Test insert
	# ll.insert(e4,3)
	# # Should print 4 now
	# print ll.get_position(3).value

	# # Test delete
	# ll.delete(1)
	# # Should print 2 now
	# print ll.get_position(1).value
	# # Should print 4 now
	# print ll.get_position(2).value
	# # Should print 3 now
	# print ll.get_position(3).value