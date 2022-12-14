??/ * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * / / * *  
   *   @ f i l e           o s _ s y s t i c k . c  
   *   @ b r i e f         C M S I S   O S   T i c k   S y s T i c k   i m p l e m e n t a t i o n  
   *   @ v e r s i o n     V 1 . 0 . 1  
   *   @ d a t e           2 4 .   N o v e m b e r   2 0 1 7  
   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 / *  
   *   C o p y r i g h t   ( c )   2 0 1 7 - 2 0 1 7   A R M   L i m i t e d .   A l l   r i g h t s   r e s e r v e d .  
   *  
   *   S P D X - L i c e n s e - I d e n t i f i e r :   A p a c h e - 2 . 0  
   *  
   *   L i c e n s e d   u n d e r   t h e   A p a c h e   L i c e n s e ,   V e r s i o n   2 . 0   ( t h e   L i c e n s e ) ;   y o u   m a y  
   *   n o t   u s e   t h i s   f i l e   e x c e p t   i n   c o m p l i a n c e   w i t h   t h e   L i c e n s e .  
   *   Y o u   m a y   o b t a i n   a   c o p y   o f   t h e   L i c e n s e   a t  
   *  
   *   w w w . a p a c h e . o r g / l i c e n s e s / L I C E N S E - 2 . 0  
   *  
   *   U n l e s s   r e q u i r e d   b y   a p p l i c a b l e   l a w   o r   a g r e e d   t o   i n   w r i t i n g ,   s o f t w a r e  
   *   d i s t r i b u t e d   u n d e r   t h e   L i c e n s e   i s   d i s t r i b u t e d   o n   a n   A S   I S   B A S I S ,   W I T H O U T  
   *   W A R R A N T I E S   O R   C O N D I T I O N S   O F   A N Y   K I N D ,   e i t h e r   e x p r e s s   o r   i m p l i e d .  
   *   S e e   t h e   L i c e n s e   f o r   t h e   s p e c i f i c   l a n g u a g e   g o v e r n i n g   p e r m i s s i o n s   a n d  
   *   l i m i t a t i o n s   u n d e r   t h e   L i c e n s e .  
   * /  
  
 # i n c l u d e   " o s _ t i c k . h "  
  
 / / l i n t   - e m a c r o ( ( 9 2 3 , 9 0 7 8 ) , S C B , S y s T i c k )   " c a s t   f r o m   u n s i g n e d   l o n g   t o   p o i n t e r "  
 # i n c l u d e   " R T E _ C o m p o n e n t s . h "  
 # i n c l u d e   C M S I S _ d e v i c e _ h e a d e r  
  
 # i f d e f     S y s T i c k  
  
 # i f n d e f   S Y S T I C K _ I R Q _ P R I O R I T Y  
 # d e f i n e   S Y S T I C K _ I R Q _ P R I O R I T Y         0 x F F U  
 # e n d i f  
  
 s t a t i c   u i n t 8 _ t   P e n d S T ;  
  
 / /   S e t u p   O S   T i c k .  
 _ _ W E A K   i n t 3 2 _ t   O S _ T i c k _ S e t u p   ( u i n t 3 2 _ t   f r e q ,   I R Q H a n d l e r _ t   h a n d l e r )   {  
     u i n t 3 2 _ t   l o a d ;  
     ( v o i d ) h a n d l e r ;  
  
     i f   ( f r e q   = =   0 U )   {  
         / / l i n t   - e { 9 0 4 }   " R e t u r n   s t a t e m e n t   b e f o r e   e n d   o f   f u n c t i o n "  
         r e t u r n   ( - 1 ) ;  
     }  
  
     l o a d   =   ( S y s t e m C o r e C l o c k   /   f r e q )   -   1 U ;  
     i f   ( l o a d   >   0 x 0 0 F F F F F F U )   {  
         / / l i n t   - e { 9 0 4 }   " R e t u r n   s t a t e m e n t   b e f o r e   e n d   o f   f u n c t i o n "  
         r e t u r n   ( - 1 ) ;  
     }  
  
     / /   S e t   S y s T i c k   I n t e r r u p t   P r i o r i t y  
 # i f       ( ( d e f i n e d ( _ _ A R M _ A R C H _ 8 M _ M A I N _ _ )   & &   ( _ _ A R M _ A R C H _ 8 M _ M A I N _ _   ! =   0 ) )   | |   \  
               ( d e f i n e d ( _ _ C O R T E X _ M )                       & &   ( _ _ C O R T E X _ M                       = =   7 U ) ) )  
     S C B - > S H P R [ 1 1 ]   =   S Y S T I C K _ I R Q _ P R I O R I T Y ;  
 # e l i f     ( d e f i n e d ( _ _ A R M _ A R C H _ 8 M _ B A S E _ _ )   & &   ( _ _ A R M _ A R C H _ 8 M _ B A S E _ _   ! =   0 ) )  
     S C B - > S H P R [ 1 ]   | =   ( ( u i n t 3 2 _ t ) S Y S T I C K _ I R Q _ P R I O R I T Y   < <   2 4 ) ;  
 # e l i f   ( ( d e f i n e d ( _ _ A R M _ A R C H _ 7 M _ _ )             & &   ( _ _ A R M _ A R C H _ 7 M _ _             ! =   0 ) )   | |   \  
               ( d e f i n e d ( _ _ A R M _ A R C H _ 7 E M _ _ )           & &   ( _ _ A R M _ A R C H _ 7 E M _ _           ! =   0 ) ) )  
     S C B - > S H P [ 1 1 ]     =   S Y S T I C K _ I R Q _ P R I O R I T Y ;  
 # e l i f     ( d e f i n e d ( _ _ A R M _ A R C H _ 6 M _ _ )             & &   ( _ _ A R M _ A R C H _ 6 M _ _             ! =   0 ) )  
     S C B - > S H P [ 1 ]     | =   ( ( u i n t 3 2 _ t ) S Y S T I C K _ I R Q _ P R I O R I T Y   < <   2 4 ) ;  
 # e l s e  
 # e r r o r   " U n k n o w n   A R M   C o r e ! "  
 # e n d i f  
  
     S y s T i c k - > C T R L   =     S y s T i c k _ C T R L _ C L K S O U R C E _ M s k   |   S y s T i c k _ C T R L _ T I C K I N T _ M s k ;  
     S y s T i c k - > L O A D   =     l o a d ;  
     S y s T i c k - > V A L     =     0 U ;  
  
     P e n d S T   =   0 U ;  
  
     r e t u r n   ( 0 ) ;  
 }  
  
 / / /   E n a b l e   O S   T i c k .  
 _ _ W E A K   v o i d   O S _ T i c k _ E n a b l e   ( v o i d )   {  
  
     i f   ( P e n d S T   ! =   0 U )   {  
         P e n d S T   =   0 U ;  
         S C B - > I C S R   =   S C B _ I C S R _ P E N D S T S E T _ M s k ;  
     }  
  
     S y s T i c k - > C T R L   | =     S y s T i c k _ C T R L _ E N A B L E _ M s k ;  
 }  
  
 / / /   D i s a b l e   O S   T i c k .  
 _ _ W E A K   v o i d   O S _ T i c k _ D i s a b l e   ( v o i d )   {  
  
     S y s T i c k - > C T R L   & =   ~ S y s T i c k _ C T R L _ E N A B L E _ M s k ;  
  
     i f   ( ( S C B - > I C S R   &   S C B _ I C S R _ P E N D S T S E T _ M s k )   ! =   0 U )   {  
         S C B - > I C S R   =   S C B _ I C S R _ P E N D S T C L R _ M s k ;  
         P e n d S T   =   1 U ;  
     }  
 }  
  
 / /   A c k n o w l e d g e   O S   T i c k   I R Q .  
 _ _ W E A K   v o i d   O S _ T i c k _ A c k n o w l e d g e I R Q   ( v o i d )   {  
     ( v o i d ) S y s T i c k - > C T R L ;  
 }  
  
 / /   G e t   O S   T i c k   I R Q   n u m b e r .  
 _ _ W E A K   i n t 3 2 _ t     O S _ T i c k _ G e t I R Q n   ( v o i d )   {  
     r e t u r n   ( ( i n t 3 2 _ t ) S y s T i c k _ I R Q n ) ;  
 }  
  
 / /   G e t   O S   T i c k   c l o c k .  
 _ _ W E A K   u i n t 3 2 _ t   O S _ T i c k _ G e t C l o c k   ( v o i d )   {  
     r e t u r n   ( S y s t e m C o r e C l o c k ) ;  
 }  
  
 / /   G e t   O S   T i c k   i n t e r v a l .  
 _ _ W E A K   u i n t 3 2 _ t   O S _ T i c k _ G e t I n t e r v a l   ( v o i d )   {  
     r e t u r n   ( S y s T i c k - > L O A D   +   1 U ) ;  
 }  
  
 / /   G e t   O S   T i c k   c o u n t   v a l u e .  
 _ _ W E A K   u i n t 3 2 _ t   O S _ T i c k _ G e t C o u n t   ( v o i d )   {  
     u i n t 3 2 _ t   l o a d   =   S y s T i c k - > L O A D ;  
     r e t u r n     ( l o a d   -   S y s T i c k - > V A L ) ;  
 }  
  
 / /   G e t   O S   T i c k   o v e r f l o w   s t a t u s .  
 _ _ W E A K   u i n t 3 2 _ t   O S _ T i c k _ G e t O v e r f l o w   ( v o i d )   {  
     r e t u r n   ( ( S y s T i c k - > C T R L   > >   1 6 )   &   1 U ) ;  
 }  
  
 # e n d i f     / /   S y s T i c k  