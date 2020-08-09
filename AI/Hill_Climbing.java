/**********
 * Author: Mohammad Hemayet Ullah
 * Date: 10th February 2018
 */

import java.util.ArrayList;
public class Hill_Climbing {
    int map[][] = { {0, 1, 1, 0, 0, 0, 0},
        	{1, 0, 1, 1, 0, 0, 0},
        	{1, 1, 0, 1, 1, 1, 0},
        	{0, 1, 1, 0, 1, 0, 0},
        	{0, 0, 1, 1, 0, 1, 0},
        	{0, 0, 1, 0, 1, 0, 0},
        	{0, 0, 0, 0, 0, 0, 0}
    };
    int color[] = {2, 2, 2, 0, 2, 0, 2}; // 0= RED    1 = GREEN    2=BLUE
    int neighbor[][]= new int[14][7];
    int current_cost;
    int best_neighbor;
    
    public int huiristic_cost(int n[]) {
   	 int cost=0;
   	 for(int i=0;i<7;i++) {
   		 for(int j=0;j<7;j++) {
   			 if(n[i]==n[j] && map[i][j]==1) {
   				cost++;
   				 
   			 }
   		 }
   	 }
   	 return cost/2;
    }
    
    public void generate_neighbore(int current_state[]) {
   	 for(int i=0;i<14;i++) {
   		 for(int j=0;j<7;j++) {
   			 neighbor[i][j]= current_state[j];
   		 }
   	 }   	 
   	 for(int i=0,j=0;i<7;i++,j++) {
   		 int temp = current_state[i];
   		 neighbor[j][i]= (temp+1)%3;
     		 j++;
   		 neighbor[j][i]=(temp+2)%3;
   	 }
   	 /*System.out.print("Current State: ");
   	 for(int n:current_state) {
   		 System.out.print(n);
   	 }
   	 System.out.println();
   	 for(int i=0;i<14;i++) {
   		System.out.print("Neighbor: ");
   		 for(int j=0;j<7;j++) {
   			 System.out.print(neighbor[i][j]);
   		 }
   		 System.out.println();
   	 }*/
	}
    
    public void HC() {
   	 System.out.println("*************Hill Climbing Algorithm to solve Map coloring*************");
   	 System.out.println("__________________________________________________________________________");
   	 int current_state[] = new int[7];
   	 current_state = color;
   	 current_cost = huiristic_cost(current_state);
    	if(current_cost==0){
   		 solution(current_state);
     		 return;
    	}
 		 boolean flag; // For checking the current state is change or not
   	 for(int i=0;i<200;i++) {
   		 generate_neighbore(current_state);
     		 System.out.println("........................................");
     		 System.out.println("Number of Iteration:"+(i+1));
     		 flag = true;
   		 for(int j=0;j<14;j++) {
   			 int neighbor_cost = huiristic_cost(neighbor[j]);
   			 System.out.println("Current cost: "+ current_cost+"\t\t Neighbor cost: "+ neighbor_cost);
   			 if(current_cost>neighbor_cost) {
   				 current_state = neighbor[j];
   				 current_cost = neighbor_cost;
             	 flag = false;
   			 }
   			 if(current_cost==0) {
   				 System.out.println("__________________________________________________________________________");
   				 System.out.println("Goal is found: ");
   				 solution(current_state);
   				 return;
   			 }
   		 }// Exploring Neighbor
      	if(flag == true){   		 // If HC stuck in the local minima, No need to go further
        	System.out.println("__________________________________________________________________________");
     		 System.out.println("Stuck in the Local Maxima.");
        	return;
      	}
   	 }
   	 
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
   	 Hill_Climbing h1 = new Hill_Climbing();
   	 h1.HC();
    }

}
