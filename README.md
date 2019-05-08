# Welcome to Team17 Final project

We took **huffman algorithm** for doing data compression that depends on variable length encoding, uniquely decodable codes and prefix rule.
# The main idea
In any text, Some characters occurs more frequently than others, **This algorithm** can represent the same piece of text using lesser number of bits. In variable-length encoding, we assign variable number of bits to characters depending upon their frequency in the given text.

# how the technique works
It works by creating a binary tree of nodes. A node can be either a leaf node or an internal node. initially, all nodes are leaf nodes, which contain the character itself. Internal nodes contain character weight and links to two child nodes. As a common convention, bit '0' represnts following the left child and bit '1' represnts followong the right child.

# The steps of the code
1. create a leaf node for each character and add them to the priority queue. 
2. while there is more than one node in the queue
		a. Remove the two nodes of highest priority from the queue.
		b. create a new internal node with these two nodes as children and with frequency equal to the sum of the two nodes' frequency. 
		c. Add the new node to the priority queue. 
3. The remaining node is the root node and the tree is complete. 

# The files 
* Huffman.h : Contain functions declaration.
* Huffman.cpp : functions implementations.
* main.cpp : Program source code.
