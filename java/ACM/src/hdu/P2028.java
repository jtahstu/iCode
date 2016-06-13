package hdu;//int�����,��long

import java.util.Scanner;

public class P2028 {
	public static Scanner count = new Scanner(System.in);

	static long gcd(long tt, long jt) {
		return jt == 0 ? tt : gcd(jt, tt % jt);
	}

	static long tsy(long tt, long jt) {
		return tt * jt / gcd(tt, jt);//������˻������������������������ȳ�������int��û������
	}

	public static void main(String[] args) {
		// TODO �Զ����ɵķ������
		while (count.hasNext()) {
			long n = count.nextLong(), tt = 1, jt;
			while (n-- > 0) {
				jt = count.nextInt();
				tt = tsy(tt, jt);
			}
			System.out.println(tt);
		}
	}

}