import java.lang.Math;
import java.util.ArrayList;
import java.util.Random;
public class Genetic_Algorithm {

		int total_city = 7;
		int total_color = 3;
		int total_population = 4;
		int total_edge = 9;
		int Max_fitness = 9;
		int map[][] = { {0, 1, 1, 0, 0, 0, 0},
	        	{1, 0, 1, 1, 0, 0, 0},
	        	{1, 1, 0, 1, 1, 1, 0},
	        	{0, 1, 1, 0, 1, 0, 0},
	        	{0, 0, 1, 1, 0, 1, 0},
	        	{0, 0, 1, 0, 1, 0, 0},
	        	{0, 0, 0, 0, 0, 0, 0}
	    };
		
		public int Fitness(int individual[]) {
			int count =0; 
			for(int i=0;i<total_city;i++) {
				for(int j=0;j<total_city;j++) {
					if(individual[i]==individual[j] && map[i][j]==1) {
						count++;
					}
				}
			}
			int fitness = total_edge-(count/2);			
			return fitness;		
		} // Fitness 		
		
	public	int[] Reproduce(int x[], int y[]) {
			int child[]= new int[7];		
			Random rand = new Random();
			int c = rand.nextInt(6)+1;
			System.out.println("Crossover position: "+c );
			
			for(int i=0;i<total_city;i++) {
				if(i<c) {
					child[i]=x[i];
				}
				else {
					child[i]=y[i];
				}				
			}		
			System.out.print("X\t: ");
			for(int n:x) {
				System.out.print(n);
			}
			System.out.println();
			
			System.out.print("Y\t: ");
			for(int n:y) {
				System.out.print(n);
			}
			System.out.println();
			
			System.out.print("child\t: ");
			for(int n:child) {
				System.out.print(n);
			}
			System.out.println("\n");
			
			return child;
		}// Reproduce 
		
		public void Population_sort(int population[][], int fitness[]) {
			for(int i=0;i<total_population;i++) {
				for(int j=i;j<total_population;j++) {
					if(fitness[i]<fitness[j]) {
						int temp = fitness[i];
						fitness[i]= fitness[j];
						fitness[j]=temp;
						int t[] = new int[total_city];
						Array_copy(t,population[i]);
						Array_copy(population[i],population[j]);
						Array_copy(population[j],t);
					}
				}
			}
			
		}// population sort according to fitness vlaue
		
		public static boolean Array_compare(int a[], int b[]) {
			boolean flag= true;
			int i=0;
			for(int m: a) {
				if(m!=b[i++]) {
					flag = false;
					break;
				}
			}
			return flag;
		} /// Compare two array, individuals same or not
		
		public int[][] Random_Selection(int population[][],int fitness[]) {			
			double fitness_prob[] = new double[total_population];			
			int parent[][] = new int [2][total_city];			
			for(int i=0;i<total_population;i++) {
				int sum =0;
				for(int n:fitness) {
					sum+= n;
				}
				fitness_prob[i]= fitness[i]/(sum*1.00);
			}					
			Random rand = new Random();			
			int count=0;
			int pk[] = new int[2];
			while(count<2) {
				double p = rand.nextDouble();
				if(0<=p && p<=fitness_prob[0]) {
					Array_copy(parent[count++],population[0]);
				}
				else if(fitness_prob[0]<p && p<=(fitness_prob[0]+fitness_prob[1])) {
					Array_copy(parent[count++],population[1]);
				}
				else if((fitness_prob[0]+fitness_prob[1])<p && p<=(fitness_prob[0]+fitness_prob[1]+fitness_prob[2])) {
					Array_copy(parent[count++],population[2]);
				}
				else {
					Array_copy(parent[count++],population[3]);
				}
				if(Array_compare(parent[0],parent[1]) && count==2) {
					count--;
				}
					
			}
			return parent;
		}// Random Selection 
		
		
		public void GA() {
			int population[][]= {
					{0,0,2,0,2,0,2},
					{1,1,1,0,2,0,2},
					{2,0,0,0,2,0,2},
					{2,2,2,0,1,0,2}
			};
			int fitness[]= new int[total_population];
			for(int i=0;i<total_population;i++) {
				fitness[i]=Fitness(population[i]);
			}
			int new_population[][]= new int[total_population][total_city];
			int child[]= new int[total_city];
			int parent[][] = new int[2][total_city];
			Random rand = new Random();
			double small_probability = 0.2;
			
			
			for(int i=0;i<100;i++) {
				System.out.println("******************Generation: "+(i+1) +"*****************");
				Population_sort(population,fitness);
				for(int j=0;j<total_population;j++) {
					parent = Random_Selection(population,fitness);										
					child = Reproduce(parent[0],parent[1]);		/// Crossover
					// Mutation*********************
					for(int k=0;k<total_city;k++){
						if(rand.nextDouble()<small_probability) {
							Mutation(child,k);
						}
					}					
					Array_copy(new_population[j],child);
				}
				for(int j=0;j<total_population;j++) {
					fitness[j]= Fitness(new_population[j]);
					if(fitness[j]==Max_fitness) {
						System.out.println("------------------------------------------------------------");
						System.out.println("Goal is found: ");
						solution(new_population[j]);
						return;
					}
				}
				for(int j=0;j<total_population;j++) {
					Array_copy(population[j],new_population[j]);
				}			
			}
		}// Genetic Algorithm
		
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
	     	 
	      }// Print the solution
		
		public void Mutation(int child[], int index) {
			Random rand = new Random();
			System.out.println("Muted on position: "+index);
			int temp = ((child[index]+1)+rand.nextInt(2))%3;
            child[index]= (temp);
            System.out.print("Child: ");
            for(int n: child){
                System.out.print(n);
            }
            System.out.println("\n");
			return;
		}// Mutation
		
		public void Array_copy(int b[], int a[]) {
			int i=0;
			for(int n:a) {
				b[i++]=n;
			}
		}// Array Copy	 
		
		public static void main(String[] argc) {
			Genetic_Algorithm ob = new Genetic_Algorithm();			
			ob.GA();			
		}
	}
