package leetcode;

import java.util.Arrays;

public class MovingZero {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] A = { 1, 1, 0, 1, 0 };
		for (int i = 0, j = 0; i < A.length; i++) {
			if (A[i] != 0) {
				A[j] = A[i];

				if (j < i) {
					A[i] = 0;
				}
				j++;
			}

		}
		System.out.println(Arrays.toString(A));
	}

}
