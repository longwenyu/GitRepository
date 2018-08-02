#include<iostream>

#define MAXLEVEL 3

class SkipNode
{
public:
	SkipNode()
	{
		key = 0;
		for(int i=0; i<MAXLEVEL; i++)
		{
			forawrd[i] = NULL;			
		}
	}

	SKNode& operator=(const SKNode* & node)
	{
		key = node->key;
		for(int i=0; i<MAXLEVEL; i++)
		{
			forward[i] = node->forward[i];
		}
	}

	int key;
	SkipNode* forward[MAXLEVEL];
};

class SkipList
{
public:


	SkipNode* hdr;
	int ListLevel;
	
}