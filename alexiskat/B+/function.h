typedef struct data_types{				//it will hold integers
	int value;
}data_types;

typedef struct node{
	void **point;						//pointer to array keys
	int *key; 							//keys of the inserted numbers
	struct node *parent;				//parent node
	char isleaf;						//check if the node is a leaf or an internal node
	int num;							//counter
	struct node *next;					//for the queueing process 
}node;

int order=4;							//four pointer

data_types * make_record(int val){
	data_types *record = (data_types *)malloc(sizeof(data_types));
	if(record!=NULL){
		record->value=val;
	}
	else{
	printf("Error in creation of new record");
	exit(1);	
	}
	
	return record;
}

node * make_node(){
	
}

node * make_leaf() {
	node * leaf = make_node();
	leaf->isleaf = 1;
	return leaf;
}



node *start_new(data_types *pointer, int key){
	node *root = make_leaf();
	root->key[0]=key;
	root->point[0]=pointer;
	root->point[order-1]=NULL;
	root->parent=NULL;	
	root->num++;
	return root;
}


node * insert_tree(node *root, int key, int val){
	data_types *pointer;
	node *leaf;
	
	pointer = make_record(val);
	
	if(root==NULL){
		return start_new(pointer,key);
	}
}


