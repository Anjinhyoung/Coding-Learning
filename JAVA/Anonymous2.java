public class Anonymous2 {
	public static void main(String[] args) {
		OuterClass1 o = new OuterClass1() {
			void a() {
				System.out.println("새롭게 정의한 익명클래스 메서드");
			}
		};
		o.a();
		OuterClass1 ok=new OuterClass1();
		ok.a();
	}
}

class OuterClass1{
	void a() {
		System.out.println("method a");
	}
	void b(){	}
}
