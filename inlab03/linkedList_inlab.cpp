#include <iostream>

using namespace std;

struct node
{
  int data;
  node *next;
};

node *createLinkedList(int n)
{
  node *head = nullptr;
  node *tail = nullptr;

  for (int i = 0; i < n; i++)
  {
    int value;
    cin >> value;

    node *newNode = new node;
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr && tail == nullptr)
    {
      head = newNode;
      tail = newNode;
      continue;
    }

    tail->next = newNode;
    tail = newNode;
  }

  return head;
}

node *insertNode(node *head, node *newNode, int position)
{
  node *currNode = head;
  int length = 1;

  while (currNode->next != nullptr)
  {
    currNode = currNode->next;
    length += 1;
  }

  if (position <= 0)
  {
    return head;
  }
  else if (position == 1)
  {
    newNode->next = head;
    head = newNode;
    return head;
  }
  else if (position > length)
  {
    currNode->next = newNode;
    return head;
  }

  currNode = head;
  node *prevNode = nullptr;

  for (int i = 1; i <= length; i++)
  {
    if (i == position)
    {
      prevNode->next = newNode;
      newNode->next = currNode;
      break;
    }

    prevNode = currNode;
    currNode = currNode->next;
  }

  return head;
}

void replace(node *head, int position, int value)
{
  node *currNode = head;
  int length = 1;

  while (currNode->next != nullptr)
  {
    currNode = currNode->next;
    length += 1;
  }

  if (position >= length || position < 0)
  {
    return;
  }

  currNode = head;

  for (int i = 0; i < length; i++)
  {
    if (i == position)
    {
      currNode->data = value;
      break;
    }
    currNode = currNode->next;
  }
}

int searchLinkedList(node *head, int key)
{
  node *currNode = head;

  int index = 0;

  while (currNode != nullptr)
  {
    if (currNode->data == key)
    {
      return index;
    }

    index++;
    currNode = currNode->next;
  }

  return -1;
}

void print(node *head)
{
  while (head != nullptr)
  {
    cout << head->data << endl;
    head = head->next;
  }
}

int main()
{
  int n = 0;
  cin >> n;
  node *head = createLinkedList(n);
  print(head);
  int m;
  cin >> m;
  cout << searchLinkedList(head, m);
  return 0;
}
