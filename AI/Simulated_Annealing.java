import java.util.ArrayList;
import java.util.Random;
import java.lang.Math;
public class Simulated_Annealing {
	int total_city = 7;
	int total_color = 3;
	int map[][] = { {0, 1, 1, 0, 0, 0, 0},
        	{1, 0, 1, 1, 0, 0, 0},
        	{1, 1, 0, 1, 1, 1, 0},
        	{0, 1, 1, 0, 1, 0, 0},
        	{0, 0, 1, 1, 0, 1, 0},
        	{0, 0, 1, 0, 1, 0, 0},
        	{0, 0, 0, 0, 0, 0, 0}
    };
	public int huiristic_cost(int n[]) {
	   	 int cost=0;
	   	 for(int i=0;i<total_city;i++) {
	   		 for(int j=0;j<total_city;j++) {
	   			 if(n[i]==n[j] && map[i][j]==1) {
	   				cost++;
	   				 
	   			 }
	   		 }
	   	 }
	   	 return cost/2;
	}
	
	public void SA() {
		System.out.println("*************Simulated Annealing Algorithm to solve Map coloring*************");
	   	 System.out.println("__________________________________________________________________________");
		int T = 1000;		// Temperature
		int current_state[] = {2,1,2,0,0,2,1}; /// Random initial state 
		int current_cost = huiristic_cost(current_state); // Initial state cost;
		Random rand = new Random();
		int next[] = new int[total_city];
		int DE;
		
		if(current_cost==0) {
			System.out.println("Goal is found.");
			Solution(current_state);
			return;
		}
		int it=0;
		while(true) {
			System.out.println("Number of iteration: "+ ++it);
            System.out.println("Temperature: "+T+"\t\t Current cost: "+current_cost);
            if(current_cost==0){
                System.out.println("__________________________________________________________________________");
                  System.out.println("Goal is found: ");
                  solution(current_state);
                  return;
            }
			T = schedule(T);
			if(T==0) {
				System.out.println("__________________________________________________________________________");
  				System.out.println("//////////////////   Goal is unreachable ////////////////////");
				return;		//current state
			}
			next = neighborhood(current_state);
			current_cost = huiristic_cost(current_state);
			DE = current_cost-huiristic_cost(next);
			if(DE>0) {
				current_state = next;
			}
			else {
				double e = Math.exp(DE/T);
				if(rand.nextDouble()<e) {
					current_state = next;
				}
			}
		}
	}
	int schedule(int T) {
		T--;
		return T;
	}
	    
	int[] neighborhood(int current_state[]) {
		Random rand = new Random();
		int neighbor[]= new int[7];
		for(int i=0;i<total_city;i++) {
			neighbor[i]=current_state[i];
		}
		int index = rand.nextInt(total_city);
		neighbor[index]= rand.nextInt(total_color);
		return neighbor;
	}
	
    public void solution(int goal_state[]) {
      	 ArrayList<String> goal_color = new ArrayList<>();
      	 for(int state: goal_state) {
      		 if(state == 0 ) {
      			 goal_color.add("RED");
      		 }
      		 else if( state == 1) {
      			 goal_color.add("GREEN");
      		 }
      		 else {
      			 goal_color.add("BLUE");
      		 }
      	 }
      	 
      	 System.out.println("Western Australia \t\t: "+ goal_color.get(0));
      	 System.out.println("Northern Trritory \t\t: "+ goal_color.get(1));
      	 System.out.println("South Australia \t\t: "+ goal_color.get(2));
      	 System.out.println("Queens Land \t\t\t: "+ goal_color.get(3));
      	 System.out.println("New South Wales \t\t: "+ goal_color.get(4));
      	 System.out.println("Victoria \t\t\t: "+ goal_color.get(5));
      	 System.out.println("Tasmia \t\t\t\t: "+ goal_color.get(6));
      	 System.out.println("__________________________________________________________________________");
      	 
       }
	
	
	public static void main(String[] argc) {
		System.out.println("Bismillah");
		Simulated_Annealing ob = new Simulated_Annealing();
		
		ob.SA();
		
	}
}
