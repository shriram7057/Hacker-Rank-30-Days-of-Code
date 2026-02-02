    def insert(self,head,data): 
    #Complete this method
        new_node = Node(data)

        # If list is empty
        if head is None:
            return new_node

        # Traverse to the end of the list
        current = head
        while current.next:
            current = current.next

        # Insert at tail
        current.next = new_node
        return head
