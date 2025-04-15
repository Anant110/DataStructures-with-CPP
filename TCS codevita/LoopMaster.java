
import java.util.*;

public class LoopMaster{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=Integer.parseInt(sc.nextLine());
        List<String> commands=new ArrayList<>();
        for(int i=0;i<n;i++){
            commands.add(sc.nextLine().trim());
        }
        processCommands(commands);
    }

    private static void processCommands(List<String> commands){
        Stack<Integer> loopCounts=new Stack<>();
        Stack<Integer> currIterations=new Stack<>();
        StringBuilder output=new StringBuilder();
        int index=0;

        while(index<commands.size()){
            String command=commands.get(index);

            if(command.startsWith("for")){
                // Parse "for X times"
                int times=Integer.parseInt(command.split(" ")[1]);
                loopCounts.push(times);
                currIterations.push(0);
            }
            else if(command.equals("do")){
               
            }
            else if(command.equals("done")){
               
                int currentIteration=currIterations.pop()+1;
                int maxIterations=loopCounts.pop();
                if(currentIteration<maxIterations){
                  
                    currIterations.push(currentIteration);
                    loopCounts.push(maxIterations);
                    index=findLoopStart(commands, index);
                    continue;
                }
            }
            else if(command.startsWith("break")){
               
                int breakAt=Integer.parseInt(command.split(" ")[1]);
                if(currIterations.peek()+1==breakAt){
                    loopCounts.pop();
                    currIterations.pop();
                    index=findLoopEnd(commands, index);
                }
            } 
            else if(command.startsWith("continue")){
                
                int continueAt=Integer.parseInt(command.split(" ")[1]);
                if(currIterations.peek()+1==continueAt){
                    int maxIterations=loopCounts.peek();
                    int currentIteration=currIterations.pop()+1;
                    if(currentIteration<maxIterations){
                        currIterations.push(currentIteration);
                        index=findLoopStart(commands, index);
                    }
                    continue;
                }
            } 
            else if(command.startsWith("print")){
                // Print the message
                String message =command.substring(command.indexOf("\"")+1,command.lastIndexOf("\""));
                output.append(message).append("\n");
            }
            index++;
        }
        System.out.print(output.toString());
    }

    private static int findLoopStart(List<String> commands,int currentIndex){
        int count=0;
        for(int i=currentIndex-1;i>=0;i--){
            if(commands.get(i).equals("done")){
                count++;
            }
            else if(commands.get(i).equals("do")){
                if(count==0){
                    return i;
                }
                count--;
            }
        }
        return 0;
    }

    private static int findLoopEnd(List<String> commands,int currentIndex){
        int count=0;
        for(int i=currentIndex+1;i<commands.size();i++){
            if(commands.get(i).equals("do")){
                count++;
            }
            else if(commands.get(i).equals("done")){
                if(count==0){
                    return i;
                }
                count--;
            }
        }
        return commands.size();
    }
}
