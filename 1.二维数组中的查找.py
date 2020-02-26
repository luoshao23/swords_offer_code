# -*- coding:utf-8 -*-
class Solution:
    # array 二维列表
    def Find(self, target, array):
        # write code here
        row = len(array)
        col = len(array[0])

        i, j = 0, col - 1

        while i < row and j >= 0:
            if target == array[i][j]:
                return True
            if target < array[i][j]:
                j -= 1
            else:
                i += 1

        return False