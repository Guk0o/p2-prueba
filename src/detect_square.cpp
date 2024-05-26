#include <ros/ros.h>
#include <geometry_msgs/Twist.h>

int main(int argc, char** argv) {
    // Inicializar el nodo ROS
    ros::init(argc, argv, "turtle_move");
    ros::NodeHandle nh;

    // Crear un publicador para enviar comandos de movimiento al turtle
    ros::Publisher turtle_vel_pub = nh.advertise<geometry_msgs::Twist>("/cmd_vel", 10);
    
    // Iniciar un objeto de tipo Twist para enviar comandos de movimiento
    geometry_msgs::Twist move_cmd;

    // Avanzar 4 metros
    move_cmd.linear.x = 4.0; // Velocidad lineal en el eje x
    move_cmd.angular.z = 0.0; // Velocidad angular

    // Publicar el comando de movimiento
    turtle_vel_pub.publish(move_cmd);
    
    // Esperar el tiempo necesario para avanzar 4 metros
    ros::Duration(1.0).sleep();

    // Detener la tortuga
    move_cmd.linear.x = 0.0;
    move_cmd.angular.z = 0.0;
    turtle_vel_pub.publish(move_cmd);

    // Girar 90 grados
    move_cmd.linear.x = 0.0;
    move_cmd.angular.z = 1.57; // Velocidad angular para girar 90 grados (aproximadamente 1.57 radianes)
    turtle_vel_pub.publish(move_cmd);

    // Esperar el tiempo necesario para girar 90 grados
    ros::Duration(1.0).sleep(); // Puede variar dependiendo del sistema

    // Detener la tortuga después de girar
    move_cmd.linear.x = 0.0;
    move_cmd.angular.z = 0.0;
    turtle_vel_pub.publish(move_cmd);

    // Repetir los mismos pasos 3 veces

    move_cmd.linear.x = 4.0;
    move_cmd.angular.z = 0.0;

    turtle_vel_pub.publish(move_cmd);
    
    ros::Duration(1.0).sleep();

    move_cmd.linear.x = 0.0;
    move_cmd.angular.z = 0.0;
    turtle_vel_pub.publish(move_cmd);

    move_cmd.linear.x = 0.0;
    move_cmd.angular.z = 1.57;
    turtle_vel_pub.publish(move_cmd);

    ros::Duration(1.0).sleep();

    move_cmd.linear.x = 0.0;
    move_cmd.angular.z = 0.0;
    turtle_vel_pub.publish(move_cmd);

    move_cmd.linear.x = 4.0; 
    move_cmd.angular.z = 0.0; 

    turtle_vel_pub.publish(move_cmd);
    
    ros::Duration(1.0).sleep();

    move_cmd.linear.x = 0.0;
    move_cmd.angular.z = 0.0;
    turtle_vel_pub.publish(move_cmd);

    move_cmd.linear.x = 0.0;
    move_cmd.angular.z = 1.57; 
    turtle_vel_pub.publish(move_cmd);

    ros::Duration(1.0).sleep();

    move_cmd.linear.x = 0.0;
    move_cmd.angular.z = 0.0;
    turtle_vel_pub.publish(move_cmd);

    move_cmd.linear.x = 4.0;
    move_cmd.angular.z = 0.0;

    turtle_vel_pub.publish(move_cmd);
    
    ros::Duration(1.0).sleep();

    move_cmd.linear.x = 0.0;
    move_cmd.angular.z = 0.0;
    turtle_vel_pub.publish(move_cmd);

    move_cmd.linear.x = 0.0;
    move_cmd.angular.z = 1.57; 
    turtle_vel_pub.publish(move_cmd);

    ros::Duration(1.0).sleep();

    move_cmd.linear.x = 0.0;
    move_cmd.angular.z = 0.0;
    turtle_vel_pub.publish(move_cmd);

    move_cmd.linear.x = 4.0;
    move_cmd.angular.z = 0.0;

    turtle_vel_pub.publish(move_cmd);
    
    ros::Duration(1.0).sleep();

    move_cmd.linear.x = 0.0;
    move_cmd.angular.z = 0.0;
    turtle_vel_pub.publish(move_cmd);

    move_cmd.linear.x = 0.0;
    move_cmd.angular.z = 1.57; 
    turtle_vel_pub.publish(move_cmd);

 
    ros::Duration(1.0).sleep(); 

    move_cmd.linear.x = 0.0;
    move_cmd.angular.z = 0.0;
    turtle_vel_pub.publish(move_cmd);

    // Actualiza ROS
    ros::spinOnce();
    // Sleep
    usleep(100000);

    return 0;
}
