#ifndef _huffman_h
#define _huffman_h
#include <cstdlib>
#include <string>
#include <string.h>
#include <queue>
#include <map>
#include <iostream>
#include <fstream>

using namespace std;

#define MAX_SIZE 270
#define PSEUDO_EOF 256

struct Huffman_node
{
	int id; 
	int freq;
	string code;
	Huffman_node  *left, *right, *parent;
};

typedef Huffman_node* Node_ptr;

class Huffman
{
private:
	Node_ptr node_array[MAX_SIZE]; 
	Node_ptr root;                 
	int size;					   
	fstream in_file, out_file;     
	map <int, string> table;        

	class Cmp
	{
	public:
		bool operator()(const Node_ptr& c1, const Node_ptr& c2) const
		{
			return (*c1).freq > (*c2).freq;
		}
	};


	priority_queue< Node_ptr, vector<Node_ptr>, Cmp > pq;

	void create_node_array();
	void create_map_table(const Node_ptr node, bool left);
	void create_pq();
	void create_huffman_tree();
	void calculate_huffman_codes();
	void rebuid_huffman_tree();

	void do_compress();
	void do_decompress();

public:
	Huffman(string in_file_name, string out_file_name);
	~Huffman();

	void compress();
	void decompress();
};

#endif
