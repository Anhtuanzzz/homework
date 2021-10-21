#Bài 1 giải pt bậc 2
def equation():
  a = int(input())
  b = int(input())
  c = int(input())
  delta = (b ** 2) - (4 * a * c)
  deltaSqrt = delta ** 1/2
  if (delta < 0):
    print("Phuong trinh vo nghiem")
  elif (delta == 0):
    x = - b / (2 * a)
    print("Phuong trinh co nghiem kep x = " + str(x))
  else:
    xFirst = (- b + deltaSqrt) / (2 * a)
    xSecond = (- b - deltaSqrt) / (2 * a)
    print("Phuong trinh co 2 nghiem phan biet " + str(xFirst) + " va " + str(xSecond))
#Bài 2 tìm min
def findMin():
  arr = [int(x) for x in input().split()]
  minNum = arr[0]
  for item in arr:
    if (item < minNum):
      minNum = item
  print("MIN = " + minNum)
#Bài 3 tính tổng 1+2+3+...+m
def sum():
  n = int(input())
  final = 0
  for i in range(1, n + 1):
    final += i
  print("Tong la " + str(final))
#Bài 4 tính giai thừa
def factory():
  n = int(input())
  final = 1
  for i in range(1,n + 1):
    final *= i
  print("Ket qua la " + str(final))
#Bài 5 sắp xếp tăng dần
def sortAscend():
  arr = [int(x) for x in input().split()]
  for i in range(len(arr)):
      for j in range(i + 1, len(arr)):
          if(arr[i] > arr[j]):
              arr[i], arr[j] = arr[j], arr[i]
  print("Day so da duoc sap xep la: " + str(arr))
#Bài 6 từ giảm dần
def sortDescend():
  arr = [int(x) for x in input().split()]
  for i in range(len(arr)):
      for j in range(i + 1, len(arr)):
          if(arr[i] < arr[j]):
              arr[i], arr[j] = arr[j], arr[i]
  print("Day so da duoc sap xep la: " + str(arr))
  