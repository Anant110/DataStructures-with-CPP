import java.util.*;

public class TCScart {

    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);

        int n=sc.nextInt();
        double[][] matpoints=new double[n][2];

        for(int i=0;i<n;i++){
            matpoints[i][0]=sc.nextDouble();
            matpoints[i][1]=sc.nextDouble();
        }

        List<double[]> hull=computeans(matpoints);

        double minArea=Double.MAX_VALUE;
        double pl=0;
        double pb=0;

        for(int i=0;i<hull.size();i++){

            int next=(i+1)%hull.size();

            double dx=hull.get(next)[0]-hull.get(i)[0];
            double dy=hull.get(next)[1]-hull.get(i)[1];
            double angle=Math.atan2(dy,dx);

 
            double[][] matrotated=rotatePolygon(hull,-angle);

            double minX=Double.MAX_VALUE,maxX=Double.MIN_VALUE;
            double minY=Double.MAX_VALUE,maxY=Double.MIN_VALUE;

            for(double[] thepoint:matrotated){
                minX = Math.min(minX, thepoint[0]);
                maxX=Math.max(maxX,thepoint[0]);
                minY=Math.min(minY,thepoint[1]);
                maxY=Math.max(maxY,thepoint[1]);
            }

            double length=maxX-minX;
            double breadth=maxY-minY;
            double area=length*breadth;

            if(area<minArea){
                minArea=area;
                pl=length;
                pb=breadth;
            }
        }

        int fL=(int) Math.ceil(Math.min(pl,pb));
        int fB=(int) Math.ceil(Math.max(pl,pb));
        

        System.out.print(fL+" "+fB);
    }

    private static List<double[]> computeans(double[][] matpoints){
        Arrays.sort(matpoints,(a,b)->{
            if(a[0]==b[0]) return Double.compare(a[1],b[1]);
            return Double.compare(a[0],b[0]);
        });

        List<double[]> lower=new ArrayList<>();
        for(double[] p:matpoints){
            while(lower.size()>=2 && cross(lower.get(lower.size()-2),lower.get(lower.size()-1),p)<=0){
                lower.remove(lower.size()-1);
            }
            lower.add(p);
        }

        List<double[]> upper=new ArrayList<>();
        for(int i=matpoints.length-1;i>=0;i--){
            double[] p=matpoints[i];
            while(upper.size()>=2 && cross(upper.get(upper.size()-2),upper.get(upper.size()-1),p)<=0){
                upper.remove(upper.size()-1);
            }
            upper.add(p);
        }

        lower.remove(lower.size()-1);
        upper.remove(upper.size()-1);
        lower.addAll(upper);

        return lower;
    }

    private static double cross(double[] o,double[] a,double[] b){
        return (a[0]-o[0])*(b[1]-o[1])-(a[1]-o[1])*(b[0]-o[0]);
    }

    private static double[][] rotatePolygon(List<double[]> points,double angle){
        double[][] rotated=new double[points.size()][2];
        double cosTheta=Math.cos(angle);
        double sinTheta=Math.sin(angle);

        for(int i=0;i<points.size();i++){
            double x=points.get(i)[0];
            double y=points.get(i)[1];
            rotated[i][0]=x*cosTheta-y*sinTheta;
            rotated[i][1]=x*sinTheta+y*cosTheta;
        }
        return rotated;
    }
}
