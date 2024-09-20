import numpy as np

print('\n\nx1:')
print('numpy version:', np.__version__)

print('\n\nex2')
array1 = np.arange(10, dtype=int)
print(array1)

print('\n\nex3')
array2 = np.ones((3,3), dtype= bool)
print(array2)

print('\n\nex4')
arr = np.array([0, 1, 2, 3, 4, 5, 6, 7, 8, 9])
arr_impar = arr % 2 != 0
array3 = arr[arr_impar]
print(array3)

print('\n\nex5')
array4 = [x if x % 2 == 0 else -1 for x in arr]
print(array4)

print('\n\nex6')
arr = np.arange(10)
arr2 = np.where(arr % 2 != 0, -1, arr)
print(arr)
print(arr2)

print('\n\nex7')
arr = arr.reshape(2,5)
print(arr)

print('\n\nex8')
a = np.arange(10).reshape(2,-1)
b = np.repeat(1, 10).reshape(2,-1)
array8 = np.vstack((a, b))
print(array8)

print('\n\nex9')
array9 = np.hstack((a, b))
print(array9)

print('\n\nex10')
a = np.array([1,2,3])
a = np.concatenate([np.repeat(a, 3), np.tile(a, 2)])
print(a)

print('\n\nex11')
a = np.array([1, 3, 7, 1, 2, 6, 0, 1])
a = np.where((a > np.roll(a, 1)) & (a > np.roll(a, -1)))[0]
print(a)

print('\n\nex12')
a = np.array([[12, 9, 4, 1], [11, 5, 8, 1], [1, 2, 3, 1]])
b = np.array([[1, 5], [1, 7], [1, 9], [1, 1]])
c = np.dot(a, b)
print(c)

print('\n\nex13')

def desvios_medias(matriz):
    m_linhas = np.mean(matriz, axis=1)
    m_colunas = np.mean(matriz, axis=0)
    d_linhas = np.std(matriz, axis=1)
    d_colunas = np.std(matriz, axis=0)
    return m_linhas, m_colunas, d_linhas, d_colunas

mat = np.arange(1, 51)
mat = np.reshape(mat, (5,10))
media_linhas, media_colunas, desvio_linhas, desvio_colunas = desvios_medias(mat)
print('media das linhas',media_linhas,'\nmedia das colunas',media_colunas,'\ndesvio das linhas',desvio_linhas,'\ndesvio das colunas',
      desvio_linhas)

print('\n\nex14')
D = np.transpose(a[:, -2:])
D = np.mean(D)
print(D)
