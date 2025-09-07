class Node:
    def __init__(self, name, id, money):
        self.name = name
        self.id = id
        self.money = money
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def id_exists(self, id):
        current = self.head
        while current:
            if current.id == id:
                return True
            current = current.next
        return False

    def find_unique_id(self, id):
        while self.id_exists(id):
            id += 1
        return id

    def insert_sorted(self, name, id, money):
        id = self.find_unique_id(id)
        new_node = Node(name, id, money)

        if not self.head or (money < self.head.money) or (money == self.head.money and id < self.head.id):
            new_node.next = self.head
            self.head = new_node
            return

        current = self.head
        while current.next:
            next_node = current.next
            if (money < next_node.money) or (money == next_node.money and id < next_node.id):
                break
            current = current.next

        new_node.next = current.next
        current.next = new_node

    def print_list(self):
        if not self.head:
            print("LinkedLink is Empty.")
            return
        current = self.head
        while current:
            print(f"Name : {current.name}")
            print(f"ID : {current.id}")
            print(f"Money : {current.money:.2f}")
            print("---------------")
            current = current.next

def main():
    ll = LinkedList()
    while True:
        try:
            line = input().strip()
        except EOFError:
            break

        if line.lower() == "end":
            break

        parts = line.split()
        if len(parts) != 3:
            continue

        name = parts[0]
        try:
            id = int(parts[1])
            money = float(parts[2])
        except:
            continue

        if id <= 0 or money < 0:
            continue

        ll.insert_sorted(name, id, money)

    ll.print_list()

if __name__ == "__main__":
    main()
