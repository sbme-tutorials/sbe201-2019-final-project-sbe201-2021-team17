# Welcome to Team17 Final project

We took **huffman algorithm** for doing data compression that depends on variable length encoding, uniquely decodable codes and prefix rule.

# The main idea
In any text, Some characters occurs more frequently than others, **This algorithm** can represent the same piece of text using lesser number of bits. In variable-length encoding, we assign variable number of bits to characters depending upon their frequency in the given text.

# How the technique works
 
 By using 
 
* **priority queue** to store nodes.Thenwe use pq.top() to get the minimum value node in the node sequence and new node value can be placed in the appropriate position of the sequence. 
* **STL map** to store each pair of huffman code.
* **pseudo-eof** (id = 256, frequence = 1) and insert it at the end of the encoded text. Then the program will know where the text ends.
* **Writing the frequence table** in compressed.txt, and then when decompressing I can rebuild the huffman table from this table.

# The steps of the code
1. create a leaf node for each character and add them to the priority queue. 
2. while there is more than one node in the queue
		a. Remove the two nodes of highest priority from the queue.
		b. create a new internal node with these two nodes as children and with frequency equal to the sum of the two nodes' frequency. 
		c. Add the new node to the priority queue. 
3. The remaining node is the root node and the tree is complete. 

# The files 
* Huffman.h : Contains functions declaration.
* Huffman.cpp : functions implementations.
* main.cpp : Program source code.
