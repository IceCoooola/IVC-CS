#define CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main()
{
    int nums[20];
    int(*numsp0)[20] = &nums;
    int** numps1 = &nums[0];
    printf("numsp0: %x\n", numsp0);
    printf("numsp1: %x\n", numps1);

    printf("numsp0 + 1 : %x\n", numsp0+1);
    printf("numsp1 + 1 : %x\n", numps1+1);
	return 0;
}
struct s
{
	int a;
};

int main()

{

	if (NULL == 0)
	{
		printf("yes.\n");
	}
//	struct s v1;
//	struct s* v2 = (struct s*)malloc(sizeof(struct s));
//	v1.a = 5;
//	v2->a = 1;
//	//or 
//	(*v2).a = 2;


	/*
	int arr[10] = { 0 };
	int* parr = &arr;
	int* p = (int*)malloc(sizeof(int) * 10);
	for (int i = 0; i < 10; i++)
	{
		p[i] = 5;
		*(p + i) = 5;
	}
	printf("%d\n",sizeof(arr));
	printf("%d\n",sizeof(parr));
	printf("%d\n",sizeof(p));
	return 0;*/
}

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

void _invertTree(struct TreeNode* root)
 {
    if(root == NULL)
        return;
    if(root->left == NULL && root->right == NULL)
        return;
    struct TreeNode* temp = root->left;
    root->left = root->right;
    root->right = temp;
    _invertTree(root->left);
    _invertTree(root->right);
 }

struct TreeNode* invertTree(struct TreeNode* root){
    _invertTree(root);
    return root;
}

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool _isSymmetric(struct TreeNode* left, struct TreeNode* right)
{
    if(left == NULL && right == NULL)
        return true;
    if(left == NULL || right == NULL)
        return false;
    if(left->val != right->val)
        return false;
    return _isSymmetric(left->left, right->right) && _isSymmetric(left->right, right->left);
    
}

bool isSymmetric(struct TreeNode* root){

    return _isSymmetric(root->left, root->right);
}
/**

 * Definition for a binary tree node.

 * struct TreeNode {

 *   int val;

 *   struct TreeNode *left;

 *   struct TreeNode *right;

 * };

 */



int TreeDepth(struct TreeNode* root)

{

  if(root == NULL)

    return 0;

   

  return 1 + fmax(TreeDepth(root->left), TreeDepth(root->right)); 

}



bool isBalanced(struct TreeNode* root){



  if(root == NULL)

    return true;

   

  int leftLength = TreeDepth(root->left);

  int rightLength = TreeDepth(root->right);

   

  if(abs(leftLength - rightLength) > 1)

    return false;

   

  return isBalanced(root->left) && isBalanced(root->right);

  return true;

   

}
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool _isUnivalTree(struct TreeNode* root, int val)
{
    if(root == NULL)
        return true;
    if(root->val != val)
        return false;
    return _isUnivalTree(root->left, val) && _isUnivalTree(root->right, val);
}

bool isUnivalTree(struct TreeNode* root){

    return _isUnivalTree(root, root->val);
}

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int maxDepth(struct TreeNode* root){

    if(root == NULL)
        return 0;
    int leftDepth = maxDepth(root->left);
    int rightDepth = maxDepth(root->right);
    return fmax(leftDepth, rightDepth) +1;
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int TreeSize(struct TreeNode* root)
{
    if(root == NULL)
        return 0;
    return TreeSize(root->left) + TreeSize(root->right) +1;
}

void _inorderTraversal(struct TreeNode* root, int* arr, int* pi)
{
    if(root == NULL)
    {
        return;
    }
    _inorderTraversal(root->left, arr, pi);
    arr[*pi] = root->val;
    (*pi)++;
    _inorderTraversal(root->right, arr, pi);
}

int* inorderTraversal(struct TreeNode* root, int* returnSize){

    if(root == NULL)
    {
        *returnSize = 0;
        return NULL;
    }
    *returnSize = TreeSize(root);
    int* returnArr = (int*)malloc(sizeof(int) * (*returnSize));
    int i = 0;
    _inorderTraversal(root, returnArr, &i);
    return returnArr;
}
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int TreeSize(struct TreeNode* root)
{
    if(root == NULL)
        return 0;
    return TreeSize(root->left) + TreeSize(root->right) +1;
}

void _postorderTraversal(struct TreeNode* root, int* arr, int* pi)
{
    if(root == NULL)
    {
        return;
    }
    _postorderTraversal(root->left, arr, pi);
    _postorderTraversal(root->right, arr, pi);
    arr[*pi] = root->val;
    (*pi)++;
}

int* postorderTraversal(struct TreeNode* root, int* returnSize){

    if(root == NULL)
    {
        *returnSize = 0;
        return NULL;
    }
    *returnSize = TreeSize(root);
    int* returnArr = (int*)malloc(sizeof(int) * (*returnSize));
    int i = 0;
    _postorderTraversal(root, returnArr, &i);
    return returnArr;
}
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int TreeSize(struct TreeNode* root)
{
    if(root == NULL)
        return 0;
    return TreeSize(root->left) + TreeSize(root->right) +1;
}

void _preorderTraversal(struct TreeNode* root, int* arr, int* pi)
{
    if(root == NULL)
        return;
    arr[*pi] = root->val;
    (*pi)++;
    _preorderTraversal(root->left, arr, pi);
    _preorderTraversal(root->right, arr, pi);
}

int* preorderTraversal(struct TreeNode* root, int* returnSize){

    if(root == NULL)
    {        *returnSize = 0;
        return NULL;
    }
    *returnSize = TreeSize(root);
    int* returnArr = (int*)malloc(sizeof(int) * (*returnSize));
    int i = 0;
    _preorderTraversal(root, returnArr, &i);
    return returnArr;
}
struct TreeNode
{
	int val;
	struct TreeNode* left;
	struct TreeNode* right;
};

bool isSameTree(struct TreeNode* p, struct TreeNode* q)
{
	if(p == NULL && q == NULL)
		return true;
	if (p == NULL || q == NULL)
		return false;
	if (p->val != q->val)
		return false;
	return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}


void swap(int* num1, int* num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void reverse(int* arr, int size)
{
    int first = 0;
    int last = size -1;
    while(last>first)
    {
        swap(&arr[last], &arr[first]);
        last--;
        first++;
    }
}

void rotate(int* nums, int numsSize, int k){

    k = k%numsSize;
    reverse(&nums[0], numsSize-k);
    reverse(&nums[numsSize-k], k);
    reverse(nums, numsSize);
}

void rotate(int* nums, int numsSize, int k){

    while(k)
    {
        int temp = nums[numsSize-1];
        for(int i = numsSize-1; i>0; i--)
        {
            nums[i] = nums[i-1];
        }
        nums[0] = temp;
    }
    
}

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){

    int newEnd = n+m-1;
    int end1 = m-1;
    int end2 = n-1;
    while(end1>=0 && end2 >=0)
    {
        if(nums1[end1] > nums2[end2])
        {
            nums1[newEnd] = nums1[end1];
            end1--;
            newEnd--;
        }
        else
        {
            nums1[newEnd] = nums2[end2];
            end2--;
            newEnd--;
        }
    }
    while(end2 >=0)
    {
        
            nums1[newEnd] = nums2[end2];
            end2--;
            newEnd--;
    }
    while(end1 >= 0)
    {
        
            nums1[newEnd] = nums1[end1];
            end1--;
            newEnd--;
        
    }
}

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){

    int newArr[m+n];
    int ptr1 = 0;
    int ptr2 = 0;
    int newPtr = 0;
    while(ptr1 < m && ptr2 < n)
    {
        if(nums1[ptr1] < nums2[ptr2])
        {
            newArr[newPtr] = nums1[ptr1];
            ptr1++;
            newPtr++;
        }
        else
        {
            newArr[newPtr] = nums2[ptr2];
            ptr2++;
            newPtr++;
            
        }
    }
    while(ptr1 != m)
    {
        
        newArr[newPtr] = nums1[ptr1];
        ptr1++;
        newPtr++;
    }
    while(ptr2 != n)
    {
        
        newArr[newPtr] = nums2[ptr2];
        ptr2++;
        newPtr++;
    }
    newPtr = 0;
    while(newPtr < m+n)
    {
        nums1[newPtr] = newArr[newPtr];
        newPtr++;
    }
}
int removeElement(int* nums, int numsSize, int val){

    int fast = 0;
    int slow = 0;
    int count = 0;
    while(fast < numsSize)
    {
        if(nums[fast] == val)
        {
            fast++;
        }
        else
        {
            nums[slow] = nums[fast];
            count++;
            fast++;
            slow++;
        }
    }
    return count;
}
TreeKLevelSize(BTNode* root, int k)
{
	if(k ==1)
	{
		if(!root)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}	
	return TreeKLevelSize(root->left, k-1) + TreeKLevelSize(root->right, k-1) ;

}


#define StackDataType int

typedef struct Stack
{
	StackDataType* data;
	int top;
	int capacity;
} Stack;

void BuyData(Stack* s)
{
	assert(s);
	StackDataType* temp = realloc(s->data, sizeof(StackDataType) * (s->capacity*2));
	if (temp)
	{
		s->data = temp;
		s->capacity*=2;
	}
	else
	{
		printf("realloc failed\n");
		exit(-1);
	}
}

void InitStack(Stack* s)
{
	assert(s);
	s->data = (StackDataType*)malloc(sizeof(StackDataType) * 3);
	s->top = 0;
	s->capacity = 3;
}
void PushStack(Stack* s, StackDataType x)
{
	assert(s);
	if (s->top == s->capacity)
	{
		BuyData(s);
	}
	s->data[s->top] = x;
	s->top++;
}
void PopStack(Stack* s)
{
	assert(s&&(s->top != 0));
	s->top--;
}
void DestoryStack(Stack* s)
{
	assert(s);
	free(s->data);
	s->data = NULL;
	s->top = 0;
	s->capacity = 0;
}

StackDataType TopStack(Stack* s)
{
	return s->data[s->top-1];
}
bool IsEmptyStack(Stack* s)
{
	return(s->top == 0);
}
int StackSize(Stack* s)
{
	return s->top;
}



typedef struct {
    Stack enQueue;
    Stack deQueue;
} MyQueue;


MyQueue* myQueueCreate() {
    MyQueue* obj = (MyQueue*)malloc(sizeof(MyQueue));
    InitStack(&obj->enQueue);
    InitStack(&obj->deQueue);
    return obj;
}

void myQueuePush(MyQueue* obj, int x) {
    PushStack(&obj->enQueue, x);
}


int myQueuePeek(MyQueue* obj) {
  
    if(IsEmptyStack(&obj->deQueue))
    {
        while(!IsEmptyStack(&obj->enQueue))
        {
            PushStack(&obj->deQueue, TopStack(&obj->enQueue));
            PopStack(&obj->enQueue);
        }
    }
    return TopStack(&obj->deQueue);
}

int myQueuePop(MyQueue* obj) {
  
    int top = myQueuePeek(obj);
    PopStack(&obj->deQueue);
    return top;
}

bool myQueueEmpty(MyQueue* obj) {
  
    return IsEmptyStack(&obj->deQueue) && IsEmptyStack(&obj->enQueue);
}

void myQueueFree(MyQueue* obj) {
    DestoryStack(&obj->deQueue);
    DestoryStack(&obj->enQueue);
}

/**
 * Your MyQueue struct will be instantiated and called as such:
 * MyQueue* obj = myQueueCreate();
 * myQueuePush(obj, x);
 
 * int param_2 = myQueuePop(obj);
 
 * int param_3 = myQueuePeek(obj);
 
 * bool param_4 = myQueueEmpty(obj);
 
 * myQueueFree(obj);
*/
typedef int QueueDataType;
typedef struct QueneNode
{
	QueueDataType data;
	struct QueneNode* next;
}QueueNode;

typedef struct Quene
{
	QueueNode* head;
	QueueNode* tail;
}Q;


void initQueue(Q* q)
{
	assert(q);
	//initiate quene to size of element. 
	q->head = NULL;
	q->tail = NULL;
}

bool isEmptyQueue(Q* q)
{
	assert(q);
	//return true if quene is empty, return false if quene is not empty.
	return q->head == NULL;
}

void enQueue(Q* q, QueueDataType x)
{
	assert(q);
	//add one element to the back of quene
	if (isEmptyQueue(q))
	{
		q->head = (QueueNode*)malloc(sizeof(QueueNode));
		if (q->head == NULL)
		{
			exit(-1);
		}
		q->head->data = x;
		q->head->next = NULL;
		q->tail = q->head;
	}
	else
	{
		q->tail->next = (QueueNode*)malloc(sizeof(QueueNode));
		if (q->tail->next == NULL)
		{
			exit(-1);
		}
		q->tail->next->data = x;
		q->tail->next->next = NULL;
		q->tail = q->tail->next;
	}

}
void deQueue(Q* q)
{
	//delete one element from the front of quene
	assert(q);
	if (isEmptyQueue(q))
	{
		return;
	}
	if (q->head->next == NULL)
	{
		free(q->head);
		q->head = q->tail = NULL;
	}
	else
	{
		QueueNode* temp = q->head;
		q->head = q->head->next;
		free(temp);
	}
}
QueueDataType getFrontQueue(Q* q)
{
	assert(q);
	if (isEmptyQueue(q))
	{
		return -1;
	}
	return q->head->data;
}
QueueDataType getBackQueue(Q* q)
{
	assert(q);
	if (isEmptyQueue(q))
	{
		return -1;
	}
	return q->tail->data;
}
void destroyQueue(Q* q)
{
	//delete all elements in quene
	while (q->head)
	{
		QueueNode* temp = q->head;
		q->head = q->head->next;
		free(temp);
	}
	q->tail = NULL;
}

int getQueueLength(Q* q)
{
	int size = 0;
	QueueNode* cur = q->head;
	while (cur != NULL)
	{
		size++;
		cur = cur->next;
	}
	return size;
}

typedef struct {
    Q Q1;
    Q Q2;
} MyStack;


MyStack* myStackCreate() {

    MyStack* obj = (MyStack*)malloc(sizeof(MyStack));
    initQueue(&obj->Q1);
    initQueue(&obj->Q2);
    return obj;
}

void myStackPush(MyStack* obj, int x) {
    
    if(!isEmptyQueue(&obj->Q1))
    {
        enQueue(&obj->Q1, x);        
    }  
    else
    {
        enQueue(&obj->Q2, x);        
    }
    
}

int myStackPop(MyStack* obj) {
  
    Q* Empty = &obj->Q1;
    Q* NotEmpty = &obj->Q2;
    if(!isEmptyQueue(&obj->Q1))
    {
        Empty = &obj->Q2;
        NotEmpty = &obj->Q1;
    }
    
    while(getQueueLength(NotEmpty)>1)
    {
        enQueue(Empty, getFrontQueue(NotEmpty));
        deQueue(NotEmpty);
    }
    int top = getFrontQueue(NotEmpty);
    deQueue(NotEmpty);
    return top;
}

int myStackTop(MyStack* obj) {
   
    if(!isEmptyQueue(&obj->Q1))
    {
        return (getBackQueue(&obj->Q1));
    }
    else
    {
        return (getBackQueue(&obj->Q2));        
    }
    
}

bool myStackEmpty(MyStack* obj) {
  return isEmptyQueue(&obj->Q1) && isEmptyQueue(&obj->Q2);
}

void myStackFree(MyStack* obj) {
    if(!isEmptyQueue(&obj->Q1))
    {
        destroyQueue(&obj->Q1);
    }
    else
    {
        destroyQueue(&obj->Q2);
    }
}

/**
 * Your MyStack struct will be instantiated and called as such:
 * MyStack* obj = myStackCreate();
 * myStackPush(obj, x);
 
 * int param_2 = myStackPop(obj);
 
 * int param_3 = myStackTop(obj);
 
 * bool param_4 = myStackEmpty(obj);
 
 * myStackFree(obj);
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<malloc.h>
#include<assert.h>

class tool
{
public:
	tool();
	~tool();
	void a()
	{
		cout << "tool: a\n";
	}
};
tool::tool()
{
	cout << "constructor tool\n";
}

tool::~tool()
{
	cout << "destructor tool\n";
}

class method
{
public:
	method();
	~method();
};

method::method()
{
	cout << "constructor method\n";

}

method::~method()
{
	cout << "destructor method\n";

}

class hammer : public tool, public method
{
public:
	hammer();
	~hammer(); 
	void a()
	{
		cout << "hammer: a\n";
	}
};

hammer::hammer()
{
	cout << "constructor hammer\n";
}

hammer::~hammer()
{
	cout << "destructor hammer\n";
}

int main()
{
	hammer p;
	p.a();
	return 0;
}
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteDuplicates(struct ListNode* head){
    if(!head)
        return head;
    struct ListNode* slow = head;
    struct ListNode* fast = head->next;
    while(fast)
    {
        if(slow->val == fast->val)
        {
            fast = fast->next;
        }
        else
        {
            slow->next = fast;
            fast = fast->next;
            slow = slow->next;
        }
    }
    slow->next = fast;
    return head;
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* singleNumber(int* nums, int numsSize, int* returnSize){
    
    int key = 0;
    int i;
    for(i = 0; i<numsSize; i++)
    {
        key^=nums[i];
    }
    int k = 0;
    while(((key>>k)&1) != 1)
    {
        k++;
    }
    int arr1[numsSize];
    int arr2[numsSize];
    int arr1sz = 0;
    int arr2sz = 0;
    for(i = 0; i<numsSize;i++)
    {
        if ((((nums[i]>>k)^(key>>k))&1) == 0)
        {
            arr1[arr1sz] = nums[i];
            arr1sz++;
        }
        else
        {
            arr2[arr2sz] = nums[i];
            arr2sz++;
        }
    }
    int* list = (int*)malloc(sizeof(int)*2);
    list[0] = 0;
    list[1] = 0;
    for(i = 0; i<arr1sz; i++)
    {
        list[0] ^= arr1[i];
    }
    for(i = 0; i<arr2sz; i++)
    {
        list[1] ^= arr2[i];
    }
    *returnSize = 2;
    return list;
}

int singleNumber(int* nums, int numsSize){

    int temp = 0;
    for(int i = 0; i < numsSize;i++)
    {
        temp^=nums[i];
    }
    return temp;
}
#include<assert.h>

#define offsetof(StructType, MemberName) (size_t)&(((StructType *)0)->MemberName)
struct stu
{
	int a;
	int b;
	char c;
}stu;


int main()
{
	printf("%d\n",offsetof(struct stu, a));
	return 0;
}
#define SWAP(n) (((n)&2863311530)>>1) | (((n)&1431655765)<<1)

int main()
{
	int t = 5;
	//0101
	//1010
	printf("%d\n", SWAP(t));
	//00000000 00000000 00000000 00000101
	//&
	//10101010 10101010 10101010 10101010
	//=
	//00000000 00000000 00000000 00000000
	//>>

	//00000000 00000000 00000000 00000101
	//&
	//01010101 01010101 01010101 01010101
	//=
	//00000000 00000000 00000000 00000101
	//<<
	//|
	return 0;
}

int findSingleDog(const int* arr, int sz)
{
	int t = 0;
	while (sz--)
	{
		t ^= arr[sz];
	}
	return t;
}

int main()
{
	__FILE__;
	int arr[10] = { 1,2,12,2,1,6,6,8,8 };
	int singleDog = findSingleDog(arr,9);
	printf("%d\n", singleDog);
	return 0;
}

int my_atoi(char* arr)
{
	int i = 0;
	int flag = 1;
	while (arr[i]< '0' ||arr[i]> '9')
	{
		i++;
	}
	if(arr[i] == '\0')
		return 0;
	if (arr[i-1] == '+')
		flag = 1;
	else if (arr[i-1] == '-')
		flag = -1;
	
	int num = 0;
	while (arr[i] >= '0' && arr[i] <= '9')
	{
		num = num * 10 + (arr[i] - '0');
		i++;
	}
	num *= flag;
	return num;
}

char* my_strcat(char* dest, const char* src)
{
	char* start = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return start;
}

char* my_strncat(char* dest, const char* src, int n)
{
	assert(dest);
	assert(src);
	char* start = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return start;
}

char* my_strncpy(char* dest, const char* src, int n)
{
	char* start = dest;
	while (n--&&*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return start;
}

int main()
{
	char arr1[222] = "avcdsdasd";
	char arr[] = "ab-1234cdefg";
	//printf("%d\n",my_atoi(arr));
	//my_strcat(arr1, arr);
	//my_strncat(arr1, arr,3);
	my_strncpy(arr1, arr, 3);
	printf("%s\n", arr1);
	return 0;
}
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
    node->val = node->next->val;
    node->next = node->next->next;
}

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeElements(struct ListNode* head, int val){
    struct ListNode* newHead = (struct ListNode*)malloc(sizeof(struct ListNode));
    newHead->next = head;
    struct ListNode* cur = newHead->next;
    struct ListNode* prev = newHead;
    while(cur)
    {
        if(cur->val == val)
        {
            prev->next = cur->next;
            free(cur);
            cur = prev->next;
        }
        else
        {
            prev = prev->next;
            cur = cur->next;
        }
    }
    return newHead->next;
}

char* GetMemory(void)
{
	char p[] = "hello world";
	return p;
}
void Test(void)
{
	char* str = NULL;
	str = GetMemory();
	printf(str);
}
int main()
{
	Test();
	return 0;
}
int main()
{
    union
    {
        short k;
        char i[2];
    }*s, a;
	
    s = &a;
    s->i[0] = 0x39; //0011 1001 0000 0000
    s->i[1] = 0x38; //0011 1001 0011 1000
    printf("% x\n", a.k);
    return 0;
}

union Un
{
	short s[7];//???????????????????????????
	int n;
	//14  ????????????16
};

int main()
{
	printf("%d\n", sizeof(union Un));
	return 0;
}

int main()
{
    unsigned char puc[4];
    struct tagPIM
    {
        unsigned char ucPim1;
        unsigned char ucData0 : 1;
        unsigned char ucData1 : 2;
        unsigned char ucData2 : 3;
    }*pstPimData;
    pstPimData = (struct tagPIM*)puc;
    memset(puc, 0, 4);
    pstPimData->ucPim1 = 2;
    //2 == 010  
	//00000010 00000000 00000000 00000000
    pstPimData->ucData0 = 3;
    //00000010 0000 0001 00000000 00000000
    //3 == 11 ????????????
    pstPimData->ucData1 = 4;
    //00000010 0000 0001 00000000 00000000
    //4 == 100 ???????????? ??????????????????00
    pstPimData->ucData2 = 5;
    //00000010 0010 1001 00000000 00000000
    // 5 == 101 ????????????
	// 0010 == 2
	// 1001 == 9
    printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
    //????????????????????? 02 29 00 00 
    return 0;
}


#define MAX_SIZE A+B
struct _Record_Struct
{
  unsigned char Env_Alarm_ID : 4;
  unsigned char Para1 : 2;
  unsigned char state;
  unsigned char avail : 1;
}*Env_Alarm_Record;
struct _Record_Struct *pointer = (struct _Record_Struct*)malloc
(sizeof(struct _Record_Struct) * MAX_SIZE);
int main()
{
	char arr[7] = "ABCDEF";
	char arr2[7] = "FABCDE";
	int flag = 0;
	for(int i = 0;i<6;i++)
	{
		if (0 == strcmp(arr, arr2))
		{
			flag = 1;
			break;
		}
		for (int j = 0; j < 5; j++)
		{
			char t = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = t;
		}
	}
	if (flag == 1)
	{
		printf("??????\n");

	}
	else
	{
		printf("??????\n");
	}
	printf("%d\n",sizeof(long));
	return 0;
}

#pragma pack(4)/*?????????????????????4???????????? ?????????VS2013????????????C??????*/
int main(int argc, char* argv[])
{
  struct tagTest1
  {
    short a;
    char d; 
    long b;   
    long c;   
  };
  struct tagTest2
  {
    long b;   
    short c;
    char d;
    long a;   
  };
  struct tagTest3
  {
    short c;
    long b;
    char d;   
    long a;   
  };
  struct tagTest1 stT1;
  struct tagTest2 stT2;
  struct tagTest3 stT3;

  printf("%d %d %d", sizeof(stT1), sizeof(stT2), sizeof(stT3));
  return 0;
}
#pragma pack()


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char A = 0;
	char B = 0;
	char C = 0;
	char D = 0;
	char E = 0;
	for (A = 1; A <= 5; A++)
	{
		for (B = 1; B <= 5; B++)
		{
			for (C = 1; C <= 5; C++)
			{
				for (D = 1; D <= 5; D++)
				{
					for (E = 1; E <= 5; E++)
					{
						int count = 0;
						if ((B == 2 && A != 3) || (B != 2 && A == 3))
							count++;
						if ((B == 2 && E != 4) || (B != 2 && E == 4))
							count++;
						if ((C == 1 && D != 2) || (C != 1 && D == 2))
							count++;
						if ((C == 5 && D != 3) || (C != 5 && D == 3))
							count++;
						if ((E == 4 && A != 1) || (E != 4 && A == 1))
							count++;
						if (A*B*C*D*E ==120 && count == 5)
							goto print;

					}
				}
			}
		}
	}
print:
	printf("A: %d B: %d C: %d D: %d E: %d", A, B, C, D, E);

	return 0;
}

int main()
{
	int i = 0;
	for (i = 1; i <= 4; i++)
	{
		int sum = 0;
		if (i != 1)
			sum++;
		if (i == 3)
			sum++;
		if (i == 4)
			sum++;
		if (i != 4)
			sum++;
		if (sum == 3)
			break;
	}
	switch (i)
	{
	case 1:
		printf("murderer is A\n");
		break;
	case 2:
		printf("murderer is B\n");
		break;
	case 3:
		printf("murderer is C\n");
		break;
	case 4:
		printf("murderer is D\n");
		break;
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[10][10] = { 0 };
	arr[0][0] = 1;
	for (int i = 1; i < 10; i++)
	{
		arr[i][0] = 1;
		int j;
		for (j = 1; j < i; j++)
		{
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		}
		arr[i][j] = 1;
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < i+1; j++)
		{
			printf("%d ",arr[i][j]);

		}
		printf("\n");
	}
	return 0;
}
//merge two sorted lists
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    if(list1 == NULL)
    {
        return list2;
    }
    if(list2 == NULL)
    {
        return list1;
    }
    struct ListNode* head = NULL;
    struct ListNode* tail = NULL;
    if(list1->val > list2->val)
    {
        head = list2;
        tail = head;
        list2 = list2->next;
    }
    else
    {
        head = list1;
        tail = head;
        list1 = list1->next;
    }
    while(list1 && list2)
    {
        if(list1->val > list2->val)
        {
            tail->next = list2;
            list2 = list2->next;
        }
        else
        {
            tail->next = list1;
            list1 = list1->next;
        }
            tail = tail->next;
    }
    if(list1)
    {
        tail->next = list1;
    }
    else
    {
        tail->next = list2;
    }
    return head;
}

//Middle of the Linked List.



struct ListNode* middleNode(struct ListNode* head){
   
    struct ListNode* fast = head;
    struct ListNode* slow = head;
    while(fast&&fast->next)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

//Middle of the Linked List.

struct ListNode* middleNode(struct ListNode* head){
   
    int sz = 0;
    struct ListNode* temp = head;
    while(temp)
    {
        temp = temp->next;
        sz++;
    }
    
    temp = head;
    
    for(int i = 0; i<sz/2;i++)
    {
        temp = temp->next;
    }
    return temp;
}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int left = 0;
	int right = 9;
	while (right >= left)
	{
		while (arr[left] % 2 != 0)
		{
			left++;
		}
		while (arr[right] % 2 != 1)
		{
			right--;
		}
		int temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

//char* myStrcpy(char* dest, const char* src)
//{
//	if (dest == NULL || src == NULL)
//	{
//		return NULL;
//	}
//	while (*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//}
//int main()
//{
//	char arr1[20] = {0};
//	char arr2[10] = "abcd";
//	myStrcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int myStrlen(const char* arr)
//{
//	if (arr == NULL)
//	{
//		return -1;
//	}
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcd";
//	printf("%d\n",myStrlen(arr));
//}

//int main()
//{
//	int bottle = 0;
//	int coke = 0;
//	int money = 20;
//	bottle = coke = 20;
//	while (bottle)
//	{
//		bottle -= 2;
//		coke += 1;
//		bottle += 1;
//	}
//	printf("%d\n", coke);
//	return 0;
//}
#include <stdio.h>
#include<math.h>

int main()
{
	int i = 0;
	int num = 6;
	int star = 1;
	for (i; i < 7; i++)
	{
		for (int j = 0; j < num; j++)
		{
			printf(" ");
		}
		for (int j = 0; j < star; j++)
		{
			printf("*");
		}
		for (int j = 0; j < num; j++)
		{
			printf(" ");
		}
		num -= 1;
		star += 2;
		printf("\n");
	}
	num += 2;
	star -= 4;
	for (i = 0; i < 6; i++)
	{
		for (int j = 0; j < num; j++)
		{
			printf(" ");
		}
		for (int j = 0; j < star; j++)
		{
			printf("*");
		}
		for (int j = 0; j < num; j++)
		{
			printf(" ");
		}
		num += 1;
		star -= 2;
		printf("\n");
	}
	return 0;
}


#include <stdio.h>
#include<math.h>

int main()
{
	int i = 0;

	for (i = 0; i < 100000; i++)
	{
		int temp = i;
		int count = 0;
		int sum = 0;
		while (temp)
		{
			temp /= 10;
			count++;
		}
		temp = i;
		for (int j = 0; j < count; j++)
		{
			sum += pow(temp % 10, count);
			temp /= 10;
		}
		if (sum == i)
		{
			printf("%d ", sum);
		}
	}
	return 0;
}// 
int calc(int x)
{
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		sum += x;
		x = x * 10 + x%10;
	}
	return sum;
}

int main()
{
	int x = 4;
	int sum = calc(x);
	printf("%d\n", sum);
	return 0;

}

//void reverse(int* arr, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (right >= left)
//	{
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//
//void print(int* arr, int sz)
//{
//	int i = 0;
//	for (i; i < sz; i++)
//	{
//		printf("%d\n", *(arr + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	print(arr, sizeof(arr)/sizeof(int));
//	reverse(arr, sizeof(arr)/sizeof(int));
//	print(arr, sizeof(arr)/sizeof(int));
//	return 0;
//}
int main()
{
	int arr[] = { 1,2,3,4,5 };
	short* arr2 = arr;
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		*(arr2 + i) = 0;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
int main()
{
	//?????????????????????????????????????????????????????????
	int a = 10;
	int b = 15;
	printf("%d %d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("%d %d\n", a, b);
	return 0;
}


int main()
{
	//??????????????????1?????????
	int a = -1;
	int count = 0;
	while (a)
	{
		a= a&(a - 1);
		count++;
	}
	printf("%d\n", count);
	return 0;
}

int main()
{
	//???????????????????????????????????????????????????????????????????????????????????????????????????
	int a = 2299;
	///00000000 00000000 00001000 11111011
	for (int i = 30; i >= 0; i-=2)
	{
		printf("%d ", (a >> i) & 1);
	}
	printf("\n");
	for (int i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (a >> i) & 1);
	}
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a = 2299;
	int b = 1999;
	int count = 0;
	//??????int???32????????????m???n???????????????????????????????????????(bit)????????? 
	//00000000 00000000 00000000 00001010
	//00000000 00000000 00000000 00010100	
	for (int i = 0; i < 32; i++)
	{
		if ((a >> i ^ b >> i) % 2 == 1)
		{
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head){

    if(head == NULL)
    {
        return head;
    }
    if(head->next == NULL)
    {
        return head;
    }
    struct ListNode* end = NULL;
    struct ListNode* back = head;
    struct ListNode* front = head->next;
    while(front)
    {
        back->next = end;
        end = back;
        back = front;
        front = front->next;
    }
    back->next = end;
    return back;
}


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int fibb(int x)
{
	if (x >= 2)
	{
		return fibb(x-1)+fibb(x-2);
	}
	else
	{
		return 1;
	}
}

int main()
{
	
	int input;
	printf("plese enter a number\n");
	scanf("%d", &input);
	printf("%d\n", fibb(input));
	return 0;
}

//int calc(int num, int k)
//{
//	if (k>1)
//		return num * calc(num, k - 1);
//	else
//		return num;
//}
//
//int main()
//{
//	int n = 10;
//	int k = 4;
//	int result = calc(n, k);
//	printf("%d\n", result);
//	return 0;
//}

//int addEachNum(int num)
//{
//	if (num > 9)
//		return num % 10 + addEachNum(num / 10);
//	else
//		return num;
//}
//
//int main()
//{
//		int input;
//		printf("plese enter a number\n");
//		scanf("%d", &input);
//		printf("%d\n", addEachNum(input));
//	
//}

//void strReverse(char * arr, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		char t = arr[left];
//		arr[left] = arr[right];
//		arr[right] = t;
//		right--;
//		left++;
//	}
//	
//}
//
//int main()
//{
//	char arr[10] = "bcdef";
//	printf("%s\n", arr);
//	strReverse(arr,5);
//	printf("%s\n", arr);
//
//}

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[10] = "wwhat";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}

//int fac(int num)
//{
//	if (num)
//	{
//		return num * fac(num - 1);
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int input;
//	printf("plese enter a number\n");
//	scanf("%d", &input);
//	printf("%d\n", fac(input));
//	
//}
//void printEachNum(int num)
//{
//	if (num > 9)
//	{
//		printEachNum(num / 10);
//		printf("%d ", num%10);
//	}
//	else
//	{
//		printf("%d ", num);
//	}
//}
//
//int main()
//{
//	int input;
//	printf("plese enter a number\n");
//	scanf("%d", &input);
//	printEachNum(input);
//	return 0;
//}
//void printChart(int n)
//{
//	for (int i = 1; i <= n; i++)
//	{
//		for(int j = 1;j<=i;j++)
//		{
//			printf("%d * %d = %d ", i, i, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int input;
//	printf("plese enter a number\n");
//	scanf("%d", &input);
//	printChart(input);
//	return 0;
//}

//void switchNum(int* a, int* b)
//{
//	*a = (*a) ^ (*b);
//	*b = (*a) ^ (*b);
//	*a = (*a) ^ (*b);
//}
//int main()
//{
//	int a = 5;
//	int b = 3;
//	switchNum(&a, &b);
//	printf("%d %d", a, b);
//}

//int isLeapYear(int num)
//{
//	if (((num % 4 == 0) && (num % 100 != 0)) || (num % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int year;
//	printf("Enter the year: ");
//	scanf("%d", &year);
//	if (isLeapYear(year))
//	{
//		printf("%d is a leap year", year);
//	}
//	else
//	{
//		printf("%d is not a leap year", year);
//	}
//	return 0;
//}

//int isPrime(int num)
//{
//	for(int i = 2;i<=sqrt(num);i++)
//	{
//		if(num%i==0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int input;
//	printf("plese enter a number\n");
//	scanf("%d", &input);
//	int result = isPrime(input);
//	if (result)
//	{
//		printf("it is prime number.\n");
//	}
//	else 
//	{
//		printf("it is not prime number.\n");
//	}
//	
//	for (int i = 100; i <= 200; i++)
//	{
//		if (isPrime(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int right = 9;
//	int input;
//	int mid;
//	printf("plese enter the number that you would like to search\n");
//	scanf("%d", &input);
//	while (right >= left)
//	{
//		mid = (left + right) / 2;
//		if (input > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else if (input < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			break;
//		}
//	}
//	if (arr[mid] == input)
//	{
//		printf("%d has found, the index is %d\n", input, mid);
//	}
//	else {
//		printf("no found\n");
//	}
//	return 0;
//}
//#include<time.h>
//#include<random>
//int main()
//{
//	srand(time(NULL));
//	int a = rand() % 11;
//	int input;
//	printf("a random number generated. 0-10\n");
//	do
//	{
//		printf("Please enter your guess:\n");
//		scanf("%d", &input);
//		if (input > a)
//		{
//			printf("your guess is larger than the number\n");
//		}
//		else if (input < a)
//		{
//			printf("your guess is smaller than the number\n");
//		}
//	} while (input != a);
//	if (input == a)
//	{
//		printf("your guess is correct!\n");
//	}
//}

//int main()
//{
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", i, j, i*j);
//		} 
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{	
//	//1-100????????????9
//	int count = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	double sum = 0.0;
//	float flag = 1.0;
//	for (int i = 1; i <= 99; i++)
//	{
//		sum += flag * (1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//int main()
//{
//	int x, y;
//	int cmd;
//	int temp;
//	printf("plese enter two numbers :\n");
//	scanf("%d%d", &x, &y);
//	cmd = x % y;
//	temp = y;
//	while (cmd)
//	{
//		int t = cmd;
//		cmd = temp%cmd;
//		temp = t;
//	}
//	printf("cmd = %d \n", temp);
//	return 0;
//}


int main()
{
	printf("\a\a\a\a\a\a");//\a??? ????????????
	printf("\061\n");//\ddd?????????????????????/2???????????? 8????????? ascii?????? ???????????? ?????????????????????
	printf("\x5F\n");// \xdd ????????????????????????ascii?????? ???????????? ?????????????????????.
	printf("%c\n", '\'');
	printf("%s\n", "\"");
	printf("%d\n", strlen("c:\test\328\test.c"));//\32????????????\ddd????????????????????????\t\t??????????????????
	return 0;
}



int removeDuplicates(int* nums, int numsSize){
    
    if(numsSize ==0)
    {
        return 0;
    }
    int dst = 0;
    int i = 0;
    int j = 0;
    //dst pointer point to the position will put element in
    //i is the left pointer 
    //j is the right pointer
    while(j<numsSize)
    {
        if(nums[i]==nums[j])
        {
            j++;
        }
        else
        {
            nums[dst] = nums[i];
            dst++;
            i = j;
            j++;
        }
    }
    nums[dst] = nums[i];
    dst++;
    return dst;
    
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){

    int* returnValue = malloc(2*sizeof(int));
    for(int i = 0; i<numsSize;i++)
    {
        for(int j = i+1;j<numsSize;j++)
        {
            if (nums[i] + nums[j] == target)
            {
                returnValue[0] = i;
                returnValue[1] = j;
                break;
            }
        }
        if(returnValue[0] == i)
        {
            break;
        }
    }
    
    *returnSize = 2;
    return returnValue;
}

int removeDuplicates(int* nums, int numsSize){
    int k = numsSize;
    for(int i = numsSize-1;i>0;i--)
    {
        if(nums[i-1] == nums[i])
        {
            for(int j = i-1;j<k-1;j++)
            {
                nums[j] = nums[j+1];
            }
            k--;
        }
    }
    return k;
}

int missingNumber(int* nums, int numsSize) {
    int i = 0;
    int sum = 0;
    for (i = 0; i <= numsSize; i++)
    {
        sum += i;
        if (i != numsSize)
            sum -= nums[i];
    }
    return sum;
}


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define N 4
#define Y(n) ((N+2)*n)
int main()
{
	int x = 2 * (N + Y(5 + 1));
	printf("%d\n", x);
}

char* getmem()
{
	char p[] = "hello world";
	return p;
}

int main()
{
	char* p = getmem();
	printf(p);
	return 0;
}

int main()
{
	unsigned char puc[4];
	struct tagPIM
	{
		unsigned char ucPim1;//8bit
		unsigned char ucData0 : 1;//1bit
		unsigned char ucData1 : 2;//2bit
		unsigned char ucData2 : 3;//3bit
		//ttl 16bit
		//2byte
	}*pstPimData;
	pstPimData = (struct tagPIM*)puc;
	memset(puc, 0, 4);
	//00000000 00000000 00000000 00000000
	pstPimData->ucPim1 = 2;
	//00000002 00101001
	//02 29 00 00
	pstPimData->ucData0 = 3;
	pstPimData->ucData1 = 4;
	pstPimData->ucData2 = 5;
	printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
	return 0;
}

//#define MAX_SIZE 2+3
//struct _Record_Struct
//{
//	unsigned char Env_Alarm_ID : 4;//4
//	unsigned char Paral :2;//2
//	unsigned char state;//16
//	unsigned char avail : 1;//3
//
//}*Env_Alarm_Record;
//
//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(struct _Record_Struct));
//	struct _Record_Struct* pointer = (struct _Record_Struct*)malloc(sizeof(struct _Record_Struct) * MAX_SIZE);
//	printf("%d\n", sizeof(*pointer));
//	return 0;
//}

#define DEBUG
#define OPTION1
#define SECTION

int main()
{
#ifdef DEBUG
	printf("DEBUG is defined\n");
#ifdef OPTION1
	printf("DEBUG and OPTION1 are defined\n");
#ifdef SECTION1
	printf("DEBUG, OPTION1 and SECTION1 are defined\n");
#else
	printf("DEBUG, OPTION1 are defined\n");
#endif
#endif
#endif
	return 0;
}

int main()
{
	int a = 1;
	int b = 2;
#if 1==1//????????????????????????
	printf("haha\n");
#elif 3==2
	printf("hehe\n");
#else
	printf("xixi\n");
#endif
#ifdef DEBUG
	printf("hehe\n");
#endif
#if defined(DEBUG)
	printf("haha\n");
#endif
#if !defined(DEBUG)
	printf("undefined hehe\n");
#endif
#ifndef DEBUG
	printf("ifndef haha\n");
#endif
	return 0;
}

#define DEBUG 0

int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		arr[i] = i;
#ifdef DEBUG//??????DEBUG?????????????????????????????????????????????????????????
		printf("%d ", arr[i]);
#endif
	}
#if DEBUG
	printf("#if?????????????????????\n");
#endif
	return 0;
}

//#define DEBUG

int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		arr[i] = i;
#ifdef DEBUG//??????DEBUG?????????????????????????????????????????????????????????
		printf("%d ", arr[i]);
#endif
	}
	return 0;
}

#define MAX 100
#define MALLOC(type, size) (type*)malloc(size*sizeof(type))

int main()
{
	printf("%d\n", MAX);//??????MAX???????????????
#undef MAX//???????????????MAX ????????????MAX????????????
	int* p = MALLOC(int, 5);
	return 0;
}

#define CAT(X,Y) X##Y
#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//???##????????????????????????????????????????????????
int main()
{
	int abcde = 2022;
	int a = 10;
	int b = 11;
	int max;
	printf("%d\n", MAX(a, b));
	printf("%d\n", CAT(abc, de));
	max = MAX(a++, b++);
	printf("a = %d, b = %d, max = %d\n", a, b, max);
	//12,13,12
	return 0;
}

#define MAX 100
#define PRINT(X) printf("the value of "#X" is %d\n",X)
#define SQUARE(X) ((X)*(X))//#define????????????????????????????????????????????????????????????
//??????#??????X?????????"X"??????X?????????????????????X??????
void print(int x)
{
	printf("the value of a is %d\n", x);
}

int main()
{
	int a = 10;
	int b = 20;
	print(a);
	print(b);//???????????????????????????a??????b?????????????????????the value of a 
	//???????????????????????????
	PRINT(a);
	PRINT(b);
	int c = SQUARE(MAX);//????????????????????????????????????????????????????????????????????????MAX???????????????100
	PRINT(c);
	//??????????????????the value of b, ??????#X????????????"X"??????X???????????????????????????
	return 0;
}


//???????????????SQUARE( ?????????????????????????????????????????????????????????
#define SQUARE(x) x*x//#define ???????????????????????????????????????????????????
//?????????????????????????????????????????????????????????
int main()
{
	int a = 0;
	a = SQUARE(5);//??????????????? 5*5
	printf("%d\n",a);
	a = SQUARE(5+1);//??????????????? 5 + 1 * 5 + 1
	printf("%d\n", a);//*???????????????+??????????????????11
	return 0;
}

int main()
{

	int* p = (int*)malloc(10 * sizeof(int));
	int* p1 = (int*)malloc(10 * sizeof(int));
	if (p1 == NULL)
	{
		//????????????????????????????????????
		printf("%s", strerror(errno));//errno???????????????strerror??????????????????
	}
	else 
	{
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			*(p1 + i) = i;
			printf("%d ", *p1 + i);
		}
		
	}
	free(p);
	free(p1);
	p = NULL;
	p1 = NULL;
	return 0;
}

int main()
{
	int i = 0;
	int sum = 0;
	char ch;
	printf("Please enter an array of integers and random spaces.:>");
	while (scanf("%d", &i) == 1)
	{
		sum += i;
		while ((ch = getchar()) == ' ')
			;
		if (ch == '\n')
			break;
		ungetc(ch, stdin);//ungetchar,???ch?????????????????????The standard input stream is the default source of data for applications
	}
	printf("?????????%d\n", sum);
	return 0;
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
	int i = 0;
	for (i = 0; i < numsSize - 1; i++)
	{
		int j = 0;
		for (j = 0; j < numsSize - 1; j++)
		{
			if ((*(nums + i) + *(nums + j) == target) && (i != j))
			{
				*returnSize = j;
				return i;
			}
		}
	}
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7 };
	int a;
	int b = 0;
	a = twoSum(arr, 7, 10, &b);
	printf("%d %d\n", a, b);
}

//int main()
//{
//	int a = 0;
//	//~a ???????????????????????????????????????
//	// ????????????+1????????????
//	// ??????-1??????????????????
//	// ????????????????????????????????????????????????????????????
//	//00000000000000000000000000000000 - ??????
//	//11111111111111111111111111111111 - ??????
//	int c = ~a;
//	printf("%d", c);
//	return 0;
//}
//int main()
//{
//	int a;
//	int i;
//	int count = 0;
//	//???a??????????????????????????????1
//	printf("enter a number>:");
//	scanf("%d", &a);
//	for (i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1) == 1)
//			//????????????????????????????????????32??????
//			// ?????????  ???????????????????????????????????????
//			//????????????????????????????????? ???0???0 ???1???1
//			//??????????????????????????????????????? ????????????
//			count++;
//	}
//	printf("????????????%d???1.\n", count);
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	int i = 0;
//	int c = a & 1;
//	printf("%d", c);
//}

//float calculate(int num)
//
//{
//	if (num < 5)
//		return num * 599.99;
//	if (num <= 20)
//		return num * 569.99;
//
//	return num * 519.99;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	float c = calculate(num);
//	printf("%0.2f\n", c);
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	int highest = 0;
//	int lowest;
//	printf("Please enter a value, -999 to quit.");
//	scanf("%d", &num);
//	lowest = num;
//	while (num != -999)
//	{
//		if (num > highest)
//		{
//			highest = num;
//		}
//		if (num < lowest)
//		{
//			lowest = num;
//		}
//		printf("Please enter a value, -999 to quit.");
//		scanf("%d", &num);
//
//
//	}
//	printf("%d %d",lowest,highest);
//
//	return 0;
//}

//int main()
//{
//
//	int i = 0;
//	int score = 0;
//	int excellent = 0;
//	int fair = 0;
//	int poor = 0;
//	for (i = 0; i < 20; i++)
//	{
//		printf("Please enter the test scores.\n");
//		scanf(" %d", &score);
//		if (score > 80)
//		{
//			excellent++;
//		}
//		else if (score >= 50)
//		{
//			fair++;
//		}
//		else
//		{
//			poor++;
//		}
//	}
//	printf(" %d are excellent. % d are fair. % d are poor.\n", excellent, fair, poor);
//
//	return 0;
//}
//int main()
//{
//	int ROW = 3;
//	int COL = 3;
//	char arr[3][3] = {0};
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			arr[i][j] = ' ';
//		}
//	}
//	for (i = 0; i < 5; i++)
//	{
//		if (i % 2 == 0)
//		{
//			for (j = 0; j < 3; j++)
//			{
//				int i = 0;
//				if (j == 2)
//				{
//					printf(" %c ", arr[i][j]);
//					break;
//				}
//				printf(" %c |", arr[i][j]);
//				i += 1;
//			}
//			printf("\n");
//		}
//		else
//		{
//			for (j = 0; j < 3; j++)
//			{
//				if (j == 2)
//				{
//					printf("---");
//					break;
//				}
//				printf("---|");
//			}
//		printf("\n");
//		}
//
//	}
//	return 0;
//}

//void sort(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int flag = 1;
//		for (j = 0; j < sz-i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int t = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = t;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//			break;
//	}
//}
//
//int main()
//{
//	int arr[] = {1,3,4,5,7,5,4,6,8,10};
//	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
//	sort(arr, sz);//???arr??????????????????
//	int i = 0;
//	for (i = 0; i <= sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[9][9] = { {1,2,3,4,5,9,7,8,9} ,{2}, {3}, {4}, {5}, {6}, {7}, {8}, {9} };
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 9; i++)
//	{
//		for (j = 1; j < 9; j++)
//		{
//			arr[i][j] = arr[0][j] * arr[i][0];
//		}
//
//	}
//	for (i = 0; i < 9; i++)
//	{
//		for (j = 0; j < 9; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//
//	int a = b = c = d = 0;
//	printf("%d", a);
//	return 0;
//}

//int fib(int a)
//{
//	int x = 0;
//	int y = 1;
//	int z = 0;
//	int i = 1;
//	if (a == 1)
//	{
//		return 1;
//	}
//	else 
//	{
//		for (i = 1; i < a; i++)
//		{
//			z = x + y;
//			x = y;
//			y = z;
//		}
//	}
//	return z;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int b = fib(a);
//	printf("\n%d\n", b);
//	return 0;
//}
//int Cal2(int x)
//{
//	if (x > 1)
//	 return	x* Cal2(x - 1);
//	
//}
//int Cal1(int x)
//{
//	int a = 1;
//	int b = 1;
//	for (a = 1; a <= x; a++)
//	{
//		b *= a;
//	}
//	return b;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d", &x);
//	y = Cal2(x);
//	printf("%d", y);
//	return 0;
//}
//int my_strlen(char* a)
//{
//	int count = 0;
//	while (*a != '\0')
//	{
//		count++;
//		a++;
//	}
//	return count;
//}
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1+my_strlen(str + 1);
//	else 
//		return 0;
//}
//int main()
//{
//	char arr[] = "didi";
//	printf("%d",my_strlen(arr));
//	return 0;
//}

//void print(int n)
//{
//
//	if (n>9)
//	{
//		print(n/10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int num = 123456;
//	print(num);
//	return 0;
//}

//void compare(int* a, int* b, int* c, int* d)
//{
//	int t;
//	if (*a< *b)
//	{
//		t = *a;
//		*a = *b;
//		*b = t;
//	}
//	if (*a < *c)
//	{
//		t = *a;
//		*a = *c;
//		*c = t;
//
//	}
//	if (*a < *d)
//	{
//		t = *a;
//		*a = *d;
//		*d = t;
//	}
//	if (*b < *c)
//	{
//		t = *b;
//		*b = *c;
//		*c = t;
//	}
//	if (*b < *d)
//	{
//		t = *b;
//		*b = *d;
//		*d = t;
//	}
//	if (*c < *d)
//	{
//		t = *c;
//		*c = *d;
//		*d = t;
//	}
//}
//
//int main()
//{
//	int a, b, c, d;
//	printf("please enter four numbers.>:");
//	scanf("%d%d%d%d", &a, &b, &c, &d);
//	printf("Those four numbers are: %d %d %d %d.", a, b, c, d);
//	compare(&a, &b, &c, &d);
//	printf("Those four numbers are: %d %d %d %d.", a, b, c, d);
//	return 0;
//}

//int main()
//{
//	printf("%d",printf("%d", printf("43")));
//	return 0;
//}

//int ADD1(int* num)
//{
//	(*num)++;
//}
//
//int main()
//{
//	int num = 0;
//	ADD1(&num);
//	printf("%d\n", num);
//	ADD1(&num);
//	printf("%d\n", num);
//
//	return 0;
//}

//int search(int x, int arr[], int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	int mid = 0;
//	while (left<=right)
//	{
//		mid = (left+right)/2;
//		if (x < arr[mid])
//		{
//			right = mid -1;
//		}
//		else if (x > arr[mid])
//		{
//			left = mid +1;
//		}
//		else if (x == arr[mid])
//		{
//			return mid;
//		}
//		
//		if (left>right)	
//			return -1;
//	}
//
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,11,13,15,17,18};
//	int x = 0;
//	scanf("%d", &x);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int y = search(x, arr,sz);
//	if (y == -1)
//		printf("nothing");
//	else
//		printf("%d",y);
//	return 0;
//}
//int runnian(int i)
//{
//	if (i % 4 == 0 && i % 100 != 0)
//	{
//		return 0;
//	}
//	else if (i % 400 == 0)
//	{
//		return 0;
//	}
//	else
//		return 1;
//}
//int main()
//{
//	int i = 2000;
//	int count = 0;
//	for (i = 2000; i <= 3000; i++)
//	{
//		if (runnian(i) == 0)
//		{
//			printf("%d\n", i);
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
//void calc(int share, float pp, float cp, float* cv, float* pc, float* profit)
//{
//	*pc = share * pp;
//	*cv = share * cp;
//	*profit = *cv - *pc;
//}
//int main()
//{
//	int share = 3;
//	float pp = 100;
//	float cp = 150;
//	float cv = 0;
//	float pc = 0;
//	float profit = 0;
//	printf("share = %d\n purchase price = %0.2f\n current price = %0.2f\n",share,pp,cp);
//	printf("current value = %0.2f\n purchase cost = %0.2f\n profit = %0.2f\n", cv, pc, profit);
//	calc(share, pp, cp, &cv, &pc, &profit);
//	printf("current value = %0.2f\n purchase cost = %0.2f\n profit = %0.2f\n", cv, pc, profit);
//
//
//
//	return 0;
//}
//int main()
//{
//	int m=0;
//	scanf("%d", &m);
//	if (m > 48)
//	{
//		printf("invalid data");
//	}
//	else if (m > 34)
//	{
//		printf("very tired");
//	}
//	else if (m > 9)
//	{
//		printf("little tired");
//	}
//	else if (m > 0)
//	{
//		printf("played at least");
//	}
//	else if (m == 0)
//	{
//		printf("bench warmer");
//	}
//	return 0;
//}

//int main()
//{
//	char code;
//	printf("enter a letter code");
//	scanf("%c", &code);
//
//	switch (code)
//	{
//	case'L':
//	case'l':
//		printf("Lakers");
//		break;
//	case'C':
//	case'c':
//		printf("Clippers");
//		break;
//	case'W':
//	case'w':
//		printf("Warriors");
//		break;
//	default:
//		printf("invalid code");
//		break;
//	}
//}
//int is_prime(int i)
//{
//	int a = 2;
//	while (a < i)
//	{
//		if (i % a == 0)
//		{
//			return 0;
//			break;
//		}
//		a++;
//	}
//	if (a = i)
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			count++;
//			printf("%d\n", i);
//		}
//	}
//	printf("count = %d\n", count);
//	return 0;
//}

//void swap(int* pa, int* pb)
//{
//	int temp = 0;
//	temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 30;
//	swap(&a, &b);
//	printf("a=%d, b=%d.\n", a, b);
//	return 0;
//}

//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("please enter the value of a");
//	scanf("%d", &a);
//	printf("please enter the value of b");
//	scanf("%d", &b);
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}
//
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("Your system will shutdown in one minute.\nType in I am a pig to avoid system shutdown.\n");
//		gets_s(input, 20);
//		if (strcmp(input, "I am a pig") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("Your system will shutdown in one minute.\nType in I am a pig to avoid system shutdown.\n");
//	gets_s(input, 20);
//	if (strcmp(input, "I am a pig") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//void game()
//{
//	int r1;
//	int r2;
//	int r3;
//	int r4;
//	int bet;
//	int guess1;
//	int guess2;
//	int guess3;
//	int guess4;
//	int correct = 0;
//	r1 = rand() % 10;
//	r2 = rand() % 10;
//	r3 = rand() % 10;
//	r4 = rand() % 10;
//	printf("How much would you like to bet:>");
//	scanf("%d", &bet);
//	printf("please enter four number from 0-9.:>");
//	scanf("%d%d%d%d", &guess1, &guess2, &guess3, &guess4);
//	if (r1 == guess1)
//	{
//		correct += 1;
//	}
//	if (r2 == guess2)
//	{
//		correct += 1;
//	}
//	if (r3 == guess3)
//	{
//		correct += 1;
//	}
//	if (r4 == guess4)
//	{
//		correct += 1;
//	}
//	if (correct == 4)
//			 {
//		 		 printf("***************\n\n");
//				 printf("4 unit matched!\n\n");
//				 printf("***************\n\n");
//				 printf("you win five times your bet!\n\n");
//				 bet *= 6;
//				 printf("now you have %d in your wallet.\n\n", bet);
//				 printf("Play again?\n\n");
//			 }
//	else if (correct == 3)
//	{
//		printf("3 unit matched!\n\n");
//		printf("you win two times your bet!\n\n");
//		bet *= 3;
//		printf("now you have %d in your wallet.\n\n", bet);
//		printf("Play again?\n\n");
//	}
//	else if (correct == 2)
//	{
//		printf("2 unit matched!\n\n");
//		printf("you win an amount equal to your bet!\n\n");
//		bet *= 2;
//		printf("now you have %d in your wallet.\n\n", bet);
//		printf("Play again?\n\n");
//	}
//	else if (correct == 1)
//	{
//		printf("1 unit matched!\n\n");
//		printf("you lose!\n\n");
//		bet = 0;
//		printf("now you have %d in your wallet.\n\n", bet);
//		printf("Play again?\n\n");
//	}
//	else if (correct == 0)
//	{
//		printf("0 unit matched!\n\n");
//		printf("you lose!\n\n");
//		bet = 0;
//		printf("now you have %d in your wallet.\n\n", bet);
//		printf("Play again?\n\n");
//	}
//
//
//}
//
//
//void menu()
//{
//	printf("*********************************\n");
//	printf("*********Pick four game**********\n");
//	printf("*********************************\n");
//	printf("*****1. play game    0. exit*****\n");
//	printf("*********************************\n");
//	return menu;
//}
//int main()
//{
//
//	int input = 0;
//	time_t t;
//	srand((unsigned)time(&t));
//	do {
//		menu();
//		printf("Please choose:>");
//		scanf("%d",&input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("exit program.");
//			break;
//		default:
//			break;
//		}
//	}
//	while (input);
//	return 0;
//}
/*
*********************************
*********Pick four game**********
*********************************
*****1. play game    0. exit*****
*********************************
Please choose:>1
How much would you like to bet:>40
please enter four number from 0-9.:>0 9 5 1
2 unit matched!

you win an amount equal to your bet!

now you have 80 in your wallet.

Play again?

*********************************
*********Pick four game**********
*********************************
*****1. play game    0. exit*****
*********************************
Please choose:>1
How much would you like to bet:>80
please enter four number from 0-9.:>1 4 7 2
0 unit matched!

you lose!

now you have 0 in your wallet.

Play again?

*********************************
*********Pick four game**********
*********************************
*****1. play game    0. exit*****
*********************************
Please choose:>1
How much would you like to bet:>40
please enter four number from 0-9.:>1 2 5 7
0 unit matched!

you lose!

now you have 0 in your wallet.

Play again?

*********************************
*********Pick four game**********
*********************************
*****1. play game    0. exit*****
*********************************
Please choose:>0
exit program.
C:\Users\renha\source\repos\practice\x64\Debug\practice.exe (process 1664) exited with code 0.
Press any key to close this window . . .

*/





//int main()
//{
//	int arr[] = {1,3,5,7,9,11,13,15,17,19,21};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	int left = 0;
//	int a = 0;
//	printf("please enter a number.>:");
//	scanf("%d", &a);
//
//	while (left <= right)
//	{
//		int mid = (left+right) / 2;
//		if (a < arr[mid])
//		{
//			right = mid+1;
//		}
//		else if (a > arr[mid])
//		{
//			left = mid-1;
//		}
//		else if (a == arr[mid])
//		{
//			printf("?????????%d\n", mid);
//			break;
//		}
//
//	}
//	if (left > right)
//	{
//		printf("??????\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int a = 1;
//	int y = 0;
//	for (i = 1; i < 10; i++)
//	{
//		y += 1;
//		for (a = 1; a<=y; a++)
//		{
//		
//				int sum = i * a;
//				printf("%d x %d = %d ", i, a, sum);
//		}
//		printf("\n");
//	}
//	return 0;
//}




//int main()
//{
//	int arr[] = { 1,2,3,4,66,6,7,8,9,10 };
//	int max = arr[0];
//  int sz = sizeof(arr)/sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] >= max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}




//int main()
//{
//	double a = 0;
//	double b = 0;
//	int x = 0;
//	int y = 0;
//	for (x = 1; x <= 100; x += 2)
//	{
//		a += (1.0 / x);
//	}
//	for (y = 2; y <= 100; y += 2)
//	{
//		b -= (1.0 / y);
//	}
//	double sum = a + b;
//	printf("%lf\n", sum);
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i%10==9||(i/9==10&&i%9==0))
//			{
//				printf("%d\n", i);
//				count++;
//			}
//	}
//
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 100; i++)
//	{
//		int a = 0;
//		for (a = 9; a < 100; a += 10)
//		{
//			if (i == a)
//			{
//				printf("%d\n", i);
//				count++;
//			}
//		}
//	}
//
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int a = 2;
//	for (i = 100; i <= 200; i++)
//	{
//	
//		for (a = 2; a < i; a++)
//		{
//			if (i % a != 0)
//				printf("%d\n", i);
//			break;
//		}
//	}
//	return 0;
////
//}
//int main()
//{
//	// 1000-2000?????????
//	int a = 1000;
//	int b = 2000;
//	for (a = 1000; a <= 2000; a++)
//	{
//		if (a%4==0&&a%100!=0)
//
//		printf("%d\n", a);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 40;
//	int temp;
//	if (a > b)
//	{
//		while (a % b != 0)
//		{
//			temp = a % b;
//			b = temp;
//			a = b;
//		}
//		if (a % b == 0)
//		{
//			printf("??????????????????%d\n", b);
//		}
//	}
//	else
//	{
//		while (b % a != 0)
//		{
//			temp = b % a;
//			a = temp;
//			b = a;
//		}
//		if (b % a == 0)
//		{
//			printf("??????????????????%d\n", a);
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int a = 0;
//
//
//	while (i < 100)
//	{
//		i++;
//		if (i % 3 == 0)
//			printf("%d\n", i);
//	}
//		return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d", &a);
//	scanf("%d", &b);
//	scanf("%d", &c);
//	if (a>b && a>c)
//	{
//		printf("%d\n",a);
//		if (b > c)
//		{
//			printf("%d\n", b);
//			printf("%d\n", c);
//		}
//		else
//		{
//			printf("%d\n", c);
//			printf("%d\n", b);
//		}
//	}
//	else if(b>a&&b>c)
//	{
//		printf("%d\n", b);
//		if (a > c)
//		{
//			printf("%d\n", a);
//			printf("%d\n", c);
//		}
//		else
//		{
//			printf("%d\n", c);
//			printf("%d\n", a);
//		}
//	}
//	else if (c>a&&c>b)
//	{
//		printf("%d\n", c);
//		if (a > b)
//		{
//			printf("%d\n", a);
//			printf("%d\n", b);
//		}
//		else
//		{
//			printf("%d\n", b);
//			printf("%d\n", a);
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	
//	char password[20] = {0};
//	int i = 0;
//	for (i=0; i < 3; i++)
//	{
//		printf("please enter the password.");
//		scanf("%s",password);
//		if (strcmp(password, "123456")==0)
//		{
//			printf("correct");
//			break;
//		}
//		else
//	{
//		printf("wrong. Reenter:");
//	}
//	}
//	if (i == 3)
//		printf("quit program.");
//
//	return 0;
//}

//int main()
//{
//	char arr1[] = "I love ?????????????????????";
//	char arr2[] = "                               ";
//	int left = 0;
//	int right = strlen(arr1)-1;
//	int i = 0;
//
//	while (left<=right)
//	{
//
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(500);
//		system("cls");
//		left++;
//		right--;
//	
//	}
//	printf("%s", arr2);
//
//
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13 };
//	int n = 0;
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	for (left, right; left < right; left++, right--)
//	{
//		for (n = left; n < right; n++)
//		{
//			printf("%d ", arr[n]);
//		}
//		printf("\n");
//	}
//	
//		return 0;
//}


//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,9,10,11,12,13};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 8;
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (k > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else if (k < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else if (k == arr[mid])
//		{
//			printf("?????????%d\n", mid);
//			break;
//		}
//
//	}
//	if (left > right)
//	{
//		printf("??????\n");
//	}
//	return 0;
//}

//int what(int n)
//{
//	if (n == 1)
//		return 5;
//	else
//		if (n == 2)
//			return 3;
//		else
//			return what(n - 2) + what(n - 1) + 6;
//
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d",what(n));
//	return 0;
//}

//int main()
//{
//	char first[12];
//	strcpy(first, "Joe Blow");
//	printf("%s", first);
//	return 0;
//}

//
//#define SIZE 2
//
//struct Student
//{
//	char name[20];
//	int t1, t2, t3;
//	float avg;
//};
//
//void load(struct Student s[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("enter a name   ");
//		gets_s(s[i].name,20);
//		printf("Enter three scores  ");
//		scanf("%d%d%d", &s[i].t1, &s[i].t2, &s[i].t3);
//		s[i].avg = (s[i].t1 + s[i].t2 + s[i].t3) / (float)3;
//		printf("\n\n");
//		getchar();
//	}
//}
//
//void print(struct Student s[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("Name: %s\n", s[i].name);
//		printf("Test Scores:  %d  %d  %d\n", s[i].t1, s[i].t2, s[i].t3);
//		printf("Average:  %f\n\n\n", s[i].avg);
//	}
//}
//
//void sort(struct Student s[], int n)
//{
//	int i, j;
//	struct Student t;
//	for (i = 0; i < n - 1; i++)
//		for (j = 0; j < n - 1; j++)
//			if (strcmp(s[j].name, s[j + 1].name) > 0)
//			{
//				t = s[j];
//				s[j] = s[j + 1];
//				s[j + 1] = t;
//			}
//}
//
//
//void savetext(struct Student s[], int n)
//{
//	FILE* f;
//	f = fopen("d:\\students.txt", "w");
//	for (int i = 0; i < n; i++)
//	{
//		fprintf(f, "%s\n", s[i].name);
//		fprintf(f, "%d %d %d %f\n", s[i].t1, s[i].t2, s[i].t3, s[i].avg);
//	}
//	fclose(f);
//}
//
//void retrievetext(struct Student s[], int n)
//{
//	FILE* f;
//	int length;
//	f = fopen("d:\\students.txt", "r");
//	for (int i = 0; i < n; i++)
//	{
//		fgets(s[i].name, sizeof(s[i].name), f);
//		length = strlen(s[i].name);
//		s[i].name[length - 1] = '\0';
//		fscanf(f, "%d%d%d%f\n", &s[i].t1, &s[i].t2, &s[i].t3, &s[i].avg);
//	}
//	fclose(f);
//}
//
//
//void savebin(struct Student s[], int n)
//{
//	FILE* f;
//	f = fopen("d:\\students.bin", "wb");
//	fwrite(&s, sizeof(s[0]), n, f);
//	fclose(f);
//}
//
//void retrievebin(struct Student s[], int n)
//{
//	FILE* f;
//	f = fopen("d:\\students.bin", "rb");
//	fread(&s, sizeof(s[0]), n, f);
//	fclose(f);
//}
//
//void main()
//{
//	struct Student s[SIZE];
//	load(s, SIZE);
//	sort(s, SIZE);
//	print(s, SIZE);
//	savetext(s, SIZE);
//	retrievetext(s, SIZE);
//	printf("\n\nAfter the text file is retrieved\n\n");
//	print(s, SIZE);
//	savebin(s, SIZE);
//	retrievebin(s, SIZE);
//	printf("\n\nAfter the binary file is retrieved\n\n");
//	print(s, SIZE);
//	system("PAUSE");
//}


//void my_strcpy(char* arr1, char* arr2)
//{
//	if (*arr2 != '\0')
//	{
//		*arr1 = *arr2;
//		my_strcpy(arr1 + 1, arr2 + 1);
//	}
//		else
//		*arr1 = *arr2;
//}
//
//void my_strcpy(char* arr1, char* arr2)
//{
//	assert(arr1 != NULL);
//	assert(arr2 != NULL);
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//}
//
//int main()
//{
//	char arr1[] = "#########";
//	char arr2[] = "didi";
//	printf("%s\n", arr1);
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//float Pow(int x, int y)
//{
//	if (y > 0)
//	{
//	return	x* Pow(x, y - 1);
//	}
//	else if (y < 0)
//	{
//		return 1 / Pow(x, -y);
//	}
//	else
//		return 1;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	printf("please enter a value>:");
//	scanf("%d%d", &x,&y);
//	printf("%f",Pow(x, y));
//	return 0;
//}
;
//int DigitSum(unsigned int x)
//{
//	if ((x / 10) != 0)
//		return (x % 10) + DigitSum(x / 10);
//	else
//		return x;
//}
//
//int main()
//{
//	int x = 0;
//	printf("please enter a value>:");
//	scanf("%d", &x);
//	printf("%d", DigitSum(x));
//	return 0;
//}

//int my_strlen(char* arr)
//{
//	if (*arr != '\0')
//		return 1 + my_strlen(arr + 1);
//	else
//		return 0;
//}
//void reverse_string(char arr[])
//{
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr)>=2)
//	reverse_string(arr + 1);
//	arr[len - 1] = tmp;
//}
//
//int main()
//{
//	char arr[] = "alo hello";
//	printf("%s\n", arr);
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}

//int my_strlen(char* arr)
//{
//	if (*arr != '\0')
//		return 1 + my_strlen(arr + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "bitaaa";
//	printf("%d", my_strlen(arr));
//	return 0;
//}

//int my_strlen(char arr[])
//{
//	int i = 0;
//	int count = 0;
//	while (arr[i] != '\0')
//	{
//		i++;
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	printf("%d",my_strlen(arr));
//	return 0;
//}

//void print(int a)
//{
//	if (a != 0)
//	{
//		print(a / 10);
//		printf("%d ", a % 10);
//	}
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}

//int main()
//{
//	int x = 0;
//	printf("please enter a value");
//	scanf("%d", &x);
//	int y = 1;
//	int i = 1;
//	int j = 1;
//	printf("    ");
//	for (i = 1; i <= x; i++)
//
//		printf("%-3d ", i);
//	printf("\n");
//	for (i=1; i<=x; i++)
//	{
//		printf("%-3d ", i);
//		for (j = 1; j <= x; j++)
//		{
//			printf("%-3d ", i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//	int* pa= arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", *(pa + i));
//	}
//	return 0;
//}

//int main()
//{
//	int a;
//	int count = 0;
//	printf("Please enter a value.");
//	scanf("%d", &a);
//	printf("%d",countone(a));
//	while (a)
//	{
//		a = a & (a - 1);
//		count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int a;
//	int count = 0;
//	int i;
//	printf("Please enter a value.");
//	scanf("%d", &a);
//	//00000000000000000000000000011111
//	//00000000000000000000000000000001
//	for (i = 0; i < 32; i++)
//	{
//		if ((a & 1) == 1)
//		{
//			count++;
//		}
//		a = a>>1;
//	}
//	printf("%d", count);
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9 };
//	int arr2[] = { 0,0,0,0,0,0,0,0,0 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int temp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = temp;
//	}
//		for (i = 0; i < sz; i++)
//			printf("%d ", arr1[i]);
//		printf("\n");
//		for (i = 0; i < sz; i++)
//			printf("%d ", arr2[i]);
//		return 0;
//}
// 
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11};
//	int i = 0;
//	int j = 0;
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	while(left<right)
//	{
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		right--;
//		left++;
//	}
//	
//	for (i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}
//int main()
//{
//	int arr[] = {2,44,6,4,3,8,11,45,7,1};
//	int i = 0;
//	int j = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz-1; i++)
//	{
//		int flag = 0;
//		for (j = 0; j < sz-1; j++)
//		{
//				if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 1;
//			}
//		}
//		if (flag == 0)
//		{
//			break;
//		}
//	}
//	for (i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}

//int my_strlen(char* arr)
//{
//	char* start = &arr[0];
//	char* end = &arr[0];
//	while (*end != '\0')
//		end++;
//	return end - start;
//}
//
//int main()
//{
//	char arr[] = "didi";
//	printf("%d", my_strlen(arr));
//	return 0;
//}

//int my_strlen(char* arr)
//{
//	if (*arr != '\0')
//		return 1+ my_strlen(arr + 1);
//	else 
//	return 0;
//}
//
//int main()
//{
//	char arr[] = "asd";
//	int a = my_strlen(arr);
//	printf("%d", a);
//	return 0;
//}

//int main()
//{
//	char name1[20] = {0};
//	char name2[20];
//	printf("please enter the name.");
//	gets_s (name1,20);
//	printf("please enter the name.");
//	gets_s(name2, 20);
//	printf("%s", name2);
//	if (strcmp(name1,name2)>0)
//	{
//		char temp[20];
//		strcpy(temp, name1);
//		strcpy(name1, name2);
//		strcpy(name2, temp);
//	}
//	printf("in ascending order, the name is : %s  %s  ",name1,name2);
//	return 0;
//}

//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c));
//	//c??????????????????????????????????????????????????????????????????4?????????
//	printf("%u\n", sizeof(!c));
//	return 0;
//}

//int main()
//{
//	char a = 0xb6;
//	//16??????  b ???11?????????1011  6???0110
//	//10110110
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a\n");
//	if (b == 0xb600)
//		printf("b\n");
//	if (c == 0xb6000000)
//		printf("c\n");
//}

//int main()
//{
//	char a = 5;
//	//00000000000000000000000000000101
//	//00000000000000000000000001111111
//	//00000101
//	//01111111
//	//????????????char?????????????????????
//	//?????????????????????????????????????????????????????????
//	//
//	//00000000000000000000000000000101
//	//00000000000000000000000001111111
//	//00000000000000000000000010000100
//	//?????????????????????
//	//10000100
//	//??????????????????????????????
//	//11111111111111111111111110000100
//	//??????????????? -1????????????
//	//11111111111111111111111110000011
//	//??????????????????????????????
//	//10000000000000000000000001111100
//	char b = 127;
//	char c = a + b;
//	printf("%d", c);
//	return 0;
//}

//struct stu
//{
//	char name[20];
//	int age;
//	char id[20];
//
//};
//int main()
//{
//	int a;
//	struct stu s1 = {"??????",29,"S19920228"};
//	printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);
//	struct stu* s = &s1;
//	printf("%s\n", (*s).name);
//	printf("%d\n", (*s).age);
//	printf("%s\n", (*s).id);
//	printf("%s\n", s->name);
//	printf("%d\n", s->age);
//	printf("%s\n", s->id);
//	//j
//
//
//	// int?????? a ??????
//	// struct stu ??????  s1??????
//	//????????? ??????????????????????????????
//	return 0;
//}

//int get_val(int a)
//{
//	scanf("%d", &a);
//	return a;
//}
//
//int count_val(int a)
//{
//	return a;
//}
//int main()
//{
//	int a = 0;
//	while (a = get_val(a), count_val(a), a != -999)
//	{
//		printf("%d\n", a);
//	}
//	return 0;
//}

//int main()
//{
//	//?????????????????????????????????????????????????????????
//	//??????????????????????????????????????????????????????????????????????????????????????????????????????
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	printf("%d", c);
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	i = a++ || ++b || d++;
//	//++???????????????++
//	//?????????????????????????????? ??????????????????????????????????????????
//	//&& ????????? ??????????????????????????????????????????  ??????0 ??? ???1
//	//|| ????????? ?????????????????? ?????????????????????
//	//|| ????????? ????????????????????????????????????
//	printf("a = %d, b = %d, c = %d, d = %d",a, b, c, d);
//	return 0;
//}
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//}
//int main()
//{
//	int a = 11;
//	int c = a | (1 << 2);
//  //~?????????????????? 
//	//00000000000000000000000000001011  ????????????a????????????????????????1011?????????0??????1
//	//00000000000000000000000000000100?????????????????????
//	printf("%d\n", c);
//	//00000000000000000000000000001111 ???????????????????????????????????????0
//	//11111111111111111111111111111011 ???????????????
//	//00000000000000000000000000000100 ?????????????????????
//	int d = c & (~(1 << 2));
//	printf("%d\n", d);
//
//
//	return 0;
//}

int main()
{
	char arr[] = "abcdef";
	char arr2[] = "bit";
	printf("%u\n", strlen(arr));//strlen??????\0??????????????????6?????????
	printf("%u\n", sizeof(arr));//sizeof ???abcde\0???arr????????????7
	strcpy(arr, arr2);
	printf("%u\n", strlen(arr));//strlen??????\0?????????bit\0?????????????????????3
	printf("%u\n", sizeof(arr));//sizeof????????????????????????????????????7
	return 0;
}

int main()
{
	int len = strlen("abc") - strlen("abcdef");
	printf("%d\n",len);
	printf("%u\n",strlen("abc") - strlen("abcdef"));
	//strlen ????????????size_t, size_t????????????????????????unsigned int???????????????????????????haha
	if (strlen("abc") - strlen("abcdef") > 0)
		printf("hehe\n");
	else
		printf("haha\n");
	return 0;
}

int main()
{
	int a[5] = { 5,4,3,2,1 };
	int* ptr = (int*)(&a + 1);
	printf("%d %d", *(a + 1), *(ptr - 1));
	return 0;
}

int main()
{
	char arr1[] = "hello world.";
	char arr2[] = "hello world.";//????????????????????????
	char* arr3 = "hello world.";
	char* arr4 = "hello world.";//??????????????????????????????????????????
	if (arr1 == arr2)//arr1 ???arr2??????????????????????????????????????????????????????????????????????????????
		printf("arr1 and arr2 are the same.\n");
	else
		printf("arr1 and arr2 are not the same.\n");
	if (arr3 == arr4)//arr3???arr4????????????????????????????????????????????????h?????????????????????h???????????????????????????????????????????????????????????????????????????
		printf("arr3 and arr4 are the same.\n");
	else
		printf("arr3 and arr 4 are not the same.\n");
	int* arr1[] = {0};//????????????
	int(*arr2)[10];//????????????
	int(*arr3)(int, int);//????????????????????????????????????????????????int???????????????int
	int(*arr4[10])(int, int);//??????????????????????????????????????????????????????int???????????????int *
	int (*(*arr5)(int,int))(int);//???????????????????????????????????????int???????????????????????????????????????????????????????????????????????????int??????????????????int?????????
	int(*(*arr6)[10])(int*);//???????????? ????????????10????????????????????? ??????????????????????????????????????????????????????????????????int ?????????int*
	void fun(int n, char* s);//?????????????????????????????????????????????
	void (*pfun)(int, char*);
	pfun = fun;
	int arr7[3][5] = { 1,2,3,4,5,6,7,8,9,10 };//?????????print????????????
	void print_arr(int arr[3][5], int x, int y);
	void print_arr1(int(*arr)[5], int x, int y);
	print_arr(arr7, 3, 5);
	print_arr1(arr7, 3, 5);
	return 0;
}
//2022.7.1
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						if (((b==2)+(a==3)==1)&&
							((b==2)+(e==4)==1)&&
							((c==1) + (d==2) == 1)&&
							((c==5) + (d==3) == 1)&&
							((e==4) + (a==1) == 1))

						{
							if (a * b * c * d * e == 120)
							{
								printf("a = %d, b = %d, c = %d, d = %d, e = %d", a, b, c, d, e);
								return 0;
							}
						}
					}
				}
			}
		}
	}
	
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						int sum = 0;
						if (b == 2 && a != 3)
							sum++;
						else if (b != 2 && a == 3)
							sum++;
						if (b == 2 && e != 4)
							sum++;
						else if (b != 2 && e == 4)
							sum++;
						if (c == 1 && d != 2)
							sum++;
						else if(c != 1 && d == 2)
							sum++;
						if (c == 5 && d != 3)
							sum++;
						else if(c != 5 && d == 3)
							sum++;
						if (e == 4 && a != 1)
							sum++;
						else if (e != 4 && a == 1)
							sum++;
						if (sum == 5&& a!=b && a!=c&&a!=d&&a!=e&&b!=c&&b!=d&&b!=e&&c!=d&&c!=e&&d!=e)
							
						{
							printf("a = %d, b = %d, c = %d, d = %d, e = %d", a, b, c, d, e);
							return 0;
						}
					}
				}
			}
		}
	}
	

	//5???????????????????????????  ??????????????????????????????
	//A???B?????????A??????
	//B???B?????????E??????
	//C???C?????????D??????
	//D???C?????????D??????
	//E???E?????????A??????
	//abc  bac    bca   cba   cab   acb
	//abc  acb    bca   bac   cab   cba
	return 0;
}

int main()
{
	int arr[4] = {0,1,2,3};
	int i = 0;
	int murderer = 0;
	for (i = 0; i < 4; i++)
	{
		murderer = i;
		int sum = 0;
		if (murderer!=0)
			sum++;
		if (murderer == 2)
			sum++;
		if (murderer == 3)
			sum++;
		if (murderer != 3)
			sum++;
		if (sum == 3)
		{
			break;
		}
	}
	if (i == 0)
		printf("murderer is A\n");
	if (i == 1)
		printf("murderer is B\n");
	if (i == 2)
		printf("murderer is C\n");
	if (i == 3)
		printf("murderer is D\n");
	//????????????4????????????1???????????????
	//A???????????????    B?????????C    C?????????D    D??????C????????????
	//?????? ???????????? ?????????1   ???????????? ?????????0    3??????????????? ???????????????
	return 0;
}


//int main()
//{
//	char killer = 'a';
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("killer = %c", killer);
//		}
//	}
//	return 0;
//}

int main()
{
	int i = 0;
	int n = 0;
	int arr[10][10] = { 0 };
	for (i = 0; i < 10; i++)
	{
			int j = 0;
			if (i == 0)
			{
				arr[i][j] = 1;
				printf("%d \n", arr[i][j]);
			}
			else
			{
				for (j = 0; j < 10; j++)
				{
					if (j == 0)
					{
						arr[i][j] = 1;
					}
					else
					{
						arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
					}
					if (i == j)
					{
						arr[i][j] = 1;
						printf("%d", arr[i][j]);
						printf("\n");
						break;
					}
					printf("%d ", arr[i][j]);
				}
			}
		
	}
	//1      
	//1 1         
	//1 2 1   
	//1 3 3 1      
	//1 4 6 4 1  
	//1 5 10 10 5 1
	//1 6 15 20 15 6 1
	return 0;
}


int main()
{
	char a[1000] = { 0 };
	int i = 0;
	printf("%d\n", strlen(a));
	//strlen???\0?????????ascii???0??????\0????????? ???0
	for (i = 0; i < 1000; i++)
	{
		a[i] = -1 - i;
	}
	//-128  --> 127
	//00000001  -->  1
	//00000010  -->  2
	//....
	//01111111  -->127
	//10000000  -->??????????????? -128
	//10000001  --> -127 (?????????????????????????????????10000000????????????11111111??????????????????????????????-127)
	//.....
	//11111111  --> -1 ????????????11111110????????????10000001????????????????????????????????????-1)
	//00000000  --> 0 
	printf("%d\n", strlen(a));
	return 0;
}

int main()
{
	unsigned int a = 0x1234;
	unsigned char b = *(unsigned char*)&a;//????????????????????????00 00 12 34???&a ???????????????00????????????????????????0
	//???????????????????????? 34 12 00 00??? &a????????????34??????????????????34????????????10?????? 3*16+4 = 48+4 = 52
	printf("%d", b);
	return 0;
}

odd_first(int arr[], int sz)
{
	int left = 0;
	int right = sz;
	while (right > left)
	{
		if (arr[left] % 2 == 0 && arr[right] % 2 == 1)
		{
			int t = arr[left];
			arr[left] = arr[right];
			arr[right] = t;
			
		}
		left++;
		right--;
	}
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0])-1;
	odd_first(arr,sz);
	for (i = 0; i <= sz; i++)
		printf("%d ", arr[i]);
	return 0;
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		int j = 0;
		for (j = 0; j < sz-1; j++)
		{
			if (arr[j] % 2 == 0 && arr[j + 1] % 2 == 1)
			{
				int t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	}
	for(i=0;i<sz;i++)
	printf("%d ", arr[i]);
	return 0;
}
//const char* my_strcpy(char* dest,const char* source)
//{
//	int i = 0;
//	while (source[i]!='\0')
//	{
//		dest[i] = source[i];
//		i++;
//	}
//	dest[i] = '\0';
//}
//int main()
//{
//	//????????????my_strcpy
//	char arr[] = "abcdef";
//	char arr2[10] = "aaaaaa";
//	my_strcpy(arr2, arr);
//	printf("%s", arr2);
//}

//int my_strlen(char* arr)
//{
//	if (*arr != '\0')
//		return 1 + my_strlen(arr + 1);
//	else
//		return 0;
//}

int my_strlen(char* arr)
{
	int i = 0;
	while (*arr != '\0')
	{
		arr++;
		i++;
	}
	return i;
}


int main()
{
	char arr[] = "abcdefg";
	my_strlen(arr);
	printf("%d", my_strlen(arr));
	return 0;
}

//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hello.");
// //??????????????????arr[12]????????????0??? arr[12] i?????????0
//	}
//	return 0;
//}

//int main()
//{
//	int money = 0;
//	int coke = 0;
//	int bottle = 0;
//	scanf("%d", &money);
//	coke = money / 1;
//	bottle = coke;
//	while (bottle>=2)
//	{
//		bottle -= 2;
//		coke += 1;
//		bottle += 1;
//	}
//	printf("%d", coke);
//	1???????????????????????????????????????????????????20?????????????????????
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int line = 0;
//	scanf("%d", &line);
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j < line-i-1; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < (2*i)+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <=i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < (line-1-i)*2 - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
	//for (i = line-1; i >= 0; i--)
	//{
	//	int j = 0;
	//	for (j = 0; j < line-i; j++)
	//	{
	//		printf(" ");
	//	}
	//	for (j = 0; j < (2 * i) + 1; j++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	
	
	//      *
	//     ***
	//    *****
	//   *******
	//  *********
	// ***********
	//*************
//
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i < 100000; i++)
//	{
//		int ret = i;
//		int n = 0;
//		while (ret)
//		{
//			n++;
//			ret /= 10;
//		}
//		ret = i;
//		int sum = 0;
//		while (ret)
//		{
//			sum += pow(ret % 10,n);
//			ret /= 10;
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//	
//	return 0;
//}

//int cal(int i)
//{
//	if (i != 0)
//		return 1 + cal(i / 10);
//	else return 0;
//}
//
//int main()
//{
//	int i = 12345;
//	printf("%d", cal(i));
//	//?????????
//}

//int main()
//{
//	int i = 100;
//	for (i = 100; i < 1000; i++)
//	{
//		if (pow(i / 100, 3) + pow(i % 10, 3) + pow(((i - i % 10) / 10) % 10, 3) == i)
//			printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int sum = 0;
//	scanf("%d%d", &a, &n);
//	int i = 0;
//	int ret = 0;
//	//2 22 222 2222 22222
//	for (i = 0; i < n; i++)
//	{
//		ret = ret*10+a;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}
//int calc(int a, int i)
//{
//	if (i > 0)
//		return pow(10, (i-1)) * a + calc(a, i - 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);
//	int i = 0;
//	int c = 0;
//	for (i = 0; i < n; i++)
//	{
//		c += calc(a, i+1);
//	}
//	printf("%d", c);
//	return 0;
//}

//void rev(char* a)
//{
//	char* left = a;
//	char* right = a+ strlen(a)-1;
//	while(left<right)
//	{
//		char t = *left;
//		*left = *right;
//		*right = t;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[100];
//	gets_s(arr,100);
//	rev(arr);
//	printf("%s", arr);
//}

//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *-- * ++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//	return 0;
//}

//int main()
//{
//	int arr[] = {1,2,3,4};
//	printf("%d ", sizeof(arr));
//	printf("%d ", sizeof(arr+0));
//	printf("%d ", sizeof(*arr));
//	printf("%d ", sizeof(arr+1));
//	printf("%d ", sizeof(arr[1]));
//	printf("%d ", sizeof(&arr));
//	printf("%d ", sizeof(*&arr));
//	printf("%d ", sizeof(&arr+1));
//	printf("%d ", sizeof(&arr[0]));
//	printf("%d ", sizeof(&arr[0]+1));
//	return 0;
//}
