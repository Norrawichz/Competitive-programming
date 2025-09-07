from typing import List, Optional

class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

# ฟังก์ชันแปลง list เป็น linked list
def list_to_linkedlist(lst):
    dummy = ListNode()
    current = dummy
    for val in lst:
        current.next = ListNode(val)
        current = current.next
    return dummy.next

# ฟังก์ชันแปลง linked list เป็น list เพื่อให้ดูผลลัพธ์ได้
def linkedlist_to_list(node):
    lst = []
    while node:
        lst.append(node.val)
        node = node.next
    return lst

class Solution:
    def mergeKLists(self, lists: List[Optional[ListNode]]) -> Optional[ListNode]:
        
        def heapify(arr, i, n):
            left = i * 2 + 1
            right = i * 2 + 2
            smallest = i
            if left < n and arr[left].val < arr[smallest].val:
                smallest = left
            if right < n and arr[right].val < arr[smallest].val:
                smallest = right
            if smallest != i:
                arr[smallest], arr[i] = arr[i], arr[smallest]
                heapify(arr, smallest, n)
        
        def buildminheap(arr):
            n = len(arr)
            for i in range(n // 2 - 1, -1, -1):
                heapify(arr, i, n)

        heap = [node for node in lists if node]
        buildminheap(heap)
        
        dummy = ListNode(0)
        current = dummy
        
        while heap:
            buildminheap(heap)
            min_node = heap[0]
            current.next = min_node
            current = current.next

            if min_node.next:
                heap[0] = min_node.next
            else:
                heap[0] = heap[-1]
                heap.pop()

            heapify(heap, 0, len(heap))
        
        return dummy.next

# ตัวอย่างการใช้ input
def main():
    # รับค่า input เป็น [[1,4,5],[1,3,4],[2,6]]
    input_data = input()
    
    # แปลงข้อมูลแต่ละ list เป็น linked list
    lists = [list_to_linkedlist(lst) for lst in input_data]
    
    # เรียกใช้ฟังก์ชัน mergeKLists
    solution = Solution()
    merged_head = solution.mergeKLists(lists)
    
    # แสดงผลลัพธ์
    merged_list = linkedlist_to_list(merged_head)
    print("Merged linked list:", merged_list)

# เรียกใช้ main เพื่อทดสอบ
if __name__ == "__main__":
    main()
