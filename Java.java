class Java extends Thread
{
	public void run()
	{
		System.out.println("thread is running");
	}
	public static void main(String[] args) {
		Java a = new Java();
		a.start();
	}

}