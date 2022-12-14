??/ * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * / / * *  
   *   @ f i l e           i r q _ c t r l _ g i c . c  
   *   @ b r i e f         I n t e r r u p t   c o n t r o l l e r   h a n d l i n g   i m p l e m e n t a t i o n   f o r   G I C  
   *   @ v e r s i o n     V 1 . 0 . 1  
   *   @ d a t e           9 .   A p r i l   2 0 1 8  
   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 / *  
   *   C o p y r i g h t   ( c )   2 0 1 7   A R M   L i m i t e d .   A l l   r i g h t s   r e s e r v e d .  
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
 # i n c l u d e   < s t d d e f . h >  
  
 # i n c l u d e   " R T E _ C o m p o n e n t s . h "  
 # i n c l u d e   C M S I S _ d e v i c e _ h e a d e r  
  
 # i n c l u d e   " i r q _ c t r l . h "  
  
 # i f   d e f i n e d ( _ _ G I C _ P R E S E N T )   & &   ( _ _ G I C _ P R E S E N T   = =   1 U )  
  
 / / /   N u m b e r   o f   i m p l e m e n t e d   i n t e r r u p t   l i n e s  
 # i f n d e f   I R Q _ G I C _ L I N E _ C O U N T  
 # d e f i n e   I R Q _ G I C _ L I N E _ C O U N T             ( 1 0 2 0 U )  
 # e n d i f  
  
 s t a t i c   I R Q H a n d l e r _ t   I R Q T a b l e [ I R Q _ G I C _ L I N E _ C O U N T ]   =   {   0 U   } ;  
 s t a t i c   u i n t 3 2 _ t           I R Q _ I D 0 ;  
  
 / / /   I n i t i a l i z e   i n t e r r u p t   c o n t r o l l e r .  
 _ _ W E A K   i n t 3 2 _ t   I R Q _ I n i t i a l i z e   ( v o i d )   {  
     u i n t 3 2 _ t   i ;  
  
     f o r   ( i   =   0 U ;   i   <   I R Q _ G I C _ L I N E _ C O U N T ;   i + + )   {  
         I R Q T a b l e [ i ]   =   ( I R Q H a n d l e r _ t ) N U L L ;  
     }  
     G I C _ E n a b l e ( ) ;  
     r e t u r n   ( 0 ) ;  
 }  
  
  
 / / /   R e g i s t e r   i n t e r r u p t   h a n d l e r .  
 _ _ W E A K   i n t 3 2 _ t   I R Q _ S e t H a n d l e r   ( I R Q n _ I D _ t   i r q n ,   I R Q H a n d l e r _ t   h a n d l e r )   {  
     i n t 3 2 _ t   s t a t u s ;  
  
     i f   ( ( i r q n   > =   0 )   & &   ( i r q n   <   ( I R Q n _ I D _ t ) I R Q _ G I C _ L I N E _ C O U N T ) )   {  
         I R Q T a b l e [ i r q n ]   =   h a n d l e r ;  
         s t a t u s   =     0 ;  
     }   e l s e   {  
         s t a t u s   =   - 1 ;  
     }  
  
     r e t u r n   ( s t a t u s ) ;  
 }  
  
  
 / / /   G e t   t h e   r e g i s t e r e d   i n t e r r u p t   h a n d l e r .  
 _ _ W E A K   I R Q H a n d l e r _ t   I R Q _ G e t H a n d l e r   ( I R Q n _ I D _ t   i r q n )   {  
     I R Q H a n d l e r _ t   h ;  
  
     / /   I g n o r e   C P U I D   f i e l d   ( s o f t w a r e   g e n e r a t e d   i n t e r r u p t s )  
     i r q n   & =   0 x 3 F F U ;  
  
     i f   ( ( i r q n   > =   0 )   & &   ( i r q n   <   ( I R Q n _ I D _ t ) I R Q _ G I C _ L I N E _ C O U N T ) )   {  
         h   =   I R Q T a b l e [ i r q n ] ;  
     }   e l s e   {  
         h   =   ( I R Q H a n d l e r _ t ) 0 ;  
     }  
  
     r e t u r n   ( h ) ;  
 }  
  
  
 / / /   E n a b l e   i n t e r r u p t .  
 _ _ W E A K   i n t 3 2 _ t   I R Q _ E n a b l e   ( I R Q n _ I D _ t   i r q n )   {  
     i n t 3 2 _ t   s t a t u s ;  
  
     i f   ( ( i r q n   > =   0 )   & &   ( i r q n   <   ( I R Q n _ I D _ t ) I R Q _ G I C _ L I N E _ C O U N T ) )   {  
         G I C _ E n a b l e I R Q   ( ( I R Q n _ T y p e ) i r q n ) ;  
         s t a t u s   =   0 ;  
     }   e l s e   {  
         s t a t u s   =   - 1 ;  
     }  
  
     r e t u r n   ( s t a t u s ) ;  
 }  
  
  
 / / /   D i s a b l e   i n t e r r u p t .  
 _ _ W E A K   i n t 3 2 _ t   I R Q _ D i s a b l e   ( I R Q n _ I D _ t   i r q n )   {  
     i n t 3 2 _ t   s t a t u s ;  
  
     i f   ( ( i r q n   > =   0 )   & &   ( i r q n   <   ( I R Q n _ I D _ t ) I R Q _ G I C _ L I N E _ C O U N T ) )   {  
         G I C _ D i s a b l e I R Q   ( ( I R Q n _ T y p e ) i r q n ) ;  
         s t a t u s   =   0 ;  
     }   e l s e   {  
         s t a t u s   =   - 1 ;  
     }  
  
     r e t u r n   ( s t a t u s ) ;  
 }  
  
  
 / / /   G e t   i n t e r r u p t   e n a b l e   s t a t e .  
 _ _ W E A K   u i n t 3 2 _ t   I R Q _ G e t E n a b l e S t a t e   ( I R Q n _ I D _ t   i r q n )   {  
     u i n t 3 2 _ t   e n a b l e ;  
  
     i f   ( ( i r q n   > =   0 )   & &   ( i r q n   <   ( I R Q n _ I D _ t ) I R Q _ G I C _ L I N E _ C O U N T ) )   {  
         e n a b l e   =   G I C _ G e t E n a b l e I R Q ( ( I R Q n _ T y p e ) i r q n ) ;  
     }   e l s e   {  
         e n a b l e   =   0 U ;  
     }  
  
     r e t u r n   ( e n a b l e ) ;  
 }  
  
  
 / / /   C o n f i g u r e   i n t e r r u p t   r e q u e s t   m o d e .  
 _ _ W E A K   i n t 3 2 _ t   I R Q _ S e t M o d e   ( I R Q n _ I D _ t   i r q n ,   u i n t 3 2 _ t   m o d e )   {  
     u i n t 3 2 _ t   v a l ;  
     u i n t 8 _ t   c f g ;  
     u i n t 8 _ t   s e c u r e ;  
     u i n t 8 _ t   c p u ;  
     i n t 3 2 _ t   s t a t u s   =   0 ;  
  
     i f   ( ( i r q n   > =   0 )   & &   ( i r q n   <   ( I R Q n _ I D _ t ) I R Q _ G I C _ L I N E _ C O U N T ) )   {  
         / /   C h e c k   t r i g g e r i n g   m o d e  
         v a l   =   ( m o d e   &   I R Q _ M O D E _ T R I G _ M s k ) ;  
  
         i f   ( v a l   = =   I R Q _ M O D E _ T R I G _ L E V E L )   {  
             c f g   =   0 x 0 0 U ;  
         }   e l s e   i f   ( v a l   = =   I R Q _ M O D E _ T R I G _ E D G E )   {  
             c f g   =   0 x 0 2 U ;  
         }   e l s e   {  
             c f g   =   0 x 0 0 U ;  
             s t a t u s   =   - 1 ;  
         }  
  
         / /   C h e c k   i n t e r r u p t   t y p e  
         v a l   =   m o d e   &   I R Q _ M O D E _ T Y P E _ M s k ;  
  
         i f   ( v a l   ! =   I R Q _ M O D E _ T Y P E _ I R Q )   {  
             s t a t u s   =   - 1 ;  
         }  
  
         / /   C h e c k   i n t e r r u p t   d o m a i n  
         v a l   =   m o d e   &   I R Q _ M O D E _ D O M A I N _ M s k ;  
  
         i f   ( v a l   = =   I R Q _ M O D E _ D O M A I N _ N O N S E C U R E )   {  
             s e c u r e   =   0 U ;  
         }   e l s e   {  
             / /   C h e c k   s e c u r i t y   e x t e n s i o n s   s u p p o r t  
             v a l   =   G I C _ D i s t r i b u t o r I n f o ( )   &   ( 1 U L   < <   1 0 U ) ;  
  
             i f   ( v a l   ! =   0 U )   {  
                 / /   S e c u r i t y   e x t e n s i o n s   a r e   s u p p o r t e d  
                 s e c u r e   =   1 U ;  
             }   e l s e   {  
                 s e c u r e   =   0 U ;  
                 s t a t u s   =   - 1 ;  
             }  
         }  
  
         / /   C h e c k   i n t e r r u p t   C P U   t a r g e t s  
         v a l   =   m o d e   &   I R Q _ M O D E _ C P U _ M s k ;  
  
         i f   ( v a l   = =   I R Q _ M O D E _ C P U _ A L L )   {  
             c p u   =   0 x F F U ;  
         }   e l s e   {  
             c p u   =   v a l   > >   I R Q _ M O D E _ C P U _ P o s ;  
         }  
  
         / /   A p p l y   c o n f i g u r a t i o n   i f   n o   m o d e   e r r o r  
         i f   ( s t a t u s   = =   0 )   {  
             G I C _ S e t C o n f i g u r a t i o n ( ( I R Q n _ T y p e ) i r q n ,   c f g ) ;  
             G I C _ S e t T a r g e t               ( ( I R Q n _ T y p e ) i r q n ,   c p u ) ;  
  
             i f   ( s e c u r e   ! =   0 U )   {  
                 G I C _ S e t G r o u p   ( ( I R Q n _ T y p e ) i r q n ,   s e c u r e ) ;  
             }  
         }  
     }  
  
     r e t u r n   ( s t a t u s ) ;  
 }  
  
  
 / / /   G e t   i n t e r r u p t   m o d e   c o n f i g u r a t i o n .  
 _ _ W E A K   u i n t 3 2 _ t   I R Q _ G e t M o d e   ( I R Q n _ I D _ t   i r q n )   {  
     u i n t 3 2 _ t   m o d e ;  
     u i n t 3 2 _ t   v a l ;  
  
     i f   ( ( i r q n   > =   0 )   & &   ( i r q n   <   ( I R Q n _ I D _ t ) I R Q _ G I C _ L I N E _ C O U N T ) )   {  
         m o d e   =   I R Q _ M O D E _ T Y P E _ I R Q ;  
  
         / /   G e t   t r i g g e r   m o d e  
         v a l   =   G I C _ G e t C o n f i g u r a t i o n ( ( I R Q n _ T y p e ) i r q n ) ;  
  
         i f   ( ( v a l   &   2 U )   ! =   0 U )   {  
             / /   C o r r e s p o n d i n g   i n t e r r u p t   i s   e d g e   t r i g g e r e d  
             m o d e   | =   I R Q _ M O D E _ T R I G _ E D G E ;  
         }   e l s e   {  
             / /   C o r r e s p o n d i n g   i n t e r r u p t   i s   l e v e l   t r i g g e r e d  
             m o d e   | =   I R Q _ M O D E _ T R I G _ L E V E L ;  
         }  
  
         / /   G e t   i n t e r r u p t   C P U   t a r g e t s  
         m o d e   | =   G I C _ G e t T a r g e t   ( ( I R Q n _ T y p e ) i r q n )   < <   I R Q _ M O D E _ C P U _ P o s ;  
  
     }   e l s e   {  
         m o d e   =   I R Q _ M O D E _ E R R O R ;  
     }  
  
     r e t u r n   ( m o d e ) ;  
 }  
  
  
 / / /   G e t   I D   n u m b e r   o f   c u r r e n t   i n t e r r u p t   r e q u e s t   ( I R Q ) .  
 _ _ W E A K   I R Q n _ I D _ t   I R Q _ G e t A c t i v e I R Q   ( v o i d )   {  
     I R Q n _ I D _ t   i r q n ;  
     u i n t 3 2 _ t   p r i o ;  
  
     / *   D u m m y   r e a d   t o   a v o i d   G I C   3 9 0   e r r a t a   8 0 1 1 2 0   * /  
     G I C _ G e t H i g h P e n d i n g I R Q ( ) ;  
  
     i r q n   =   G I C _ A c k n o w l e d g e P e n d i n g ( ) ;  
  
     _ _ D S B ( ) ;  
  
     / *   W o r k a r o u n d   G I C   3 9 0   e r r a t a   7 3 3 0 7 5   ( G I C - 3 9 0 _ E r r a t a _ N o t i c e _ v 6 . p d f ,   0 9 - J u l - 2 0 1 4 )     * /  
     / *   T h e   f o l l o w i n g   w o r k a r o u n d   c o d e   i s   f o r   a   s i n g l e - c o r e   s y s t e m .     I t   w o u l d   b e               * /  
     / *   d i f f e r e n t   i n   a   m u l t i - c o r e   s y s t e m .                                                                                           * /  
     / *   I f   t h e   I D   i s   0   o r   0 x 3 F E   o r   0 x 3 F F ,   t h e n   t h e   G I C   C P U   i n t e r f a c e   m a y   b e   l o c k e d - u p   * /  
     / *   s o   u n l o c k   i t ,   o t h e r w i s e   s e r v i c e   t h e   i n t e r r u p t   a s   n o r m a l .                                             * /  
     / *   S p e c i a l   I D s   1 0 2 0 = 0 x 3 F C   a n d   1 0 2 1 = 0 x 3 F D   a r e   r e s e r v e d   v a l u e s   i n   G I C v 1   a n d   G I C v 2     * /  
     / *   s o   w i l l   n o t   o c c u r   h e r e .                                                                                                               * /  
  
     i f   ( ( i r q n   = =   0 )   | |   ( i r q n   > =   0 x 3 F E ) )   {  
         / *   U n l o c k   t h e   C P U   i n t e r f a c e   w i t h   a   d u m m y   w r i t e   t o   I n t e r r u p t   P r i o r i t y   R e g i s t e r   * /  
         p r i o   =   G I C _ G e t P r i o r i t y ( ( I R Q n _ T y p e ) 0 ) ;  
         G I C _ S e t P r i o r i t y   ( ( I R Q n _ T y p e ) 0 ,   p r i o ) ;  
  
         _ _ D S B ( ) ;  
  
         i f   ( ( i r q n   = =   0 U )   & &   ( ( G I C _ G e t I R Q S t a t u s   ( ( I R Q n _ T y p e ) i r q n )   &   1 U )   ! =   0 U )   & &   ( I R Q _ I D 0   = =   0 U ) )   {  
             / *   I f   t h e   I D   i s   0 ,   i s   a c t i v e   a n d   h a s   n o t   b e e n   s e e n   b e f o r e   * /  
             I R Q _ I D 0   =   1 U ;  
         }  
         / *   E n d   o f   W o r k a r o u n d   G I C   3 9 0   e r r a t a   7 3 3 0 7 5   * /  
     }  
  
     r e t u r n   ( i r q n ) ;  
 }  
  
  
 / / /   G e t   I D   n u m b e r   o f   c u r r e n t   f a s t   i n t e r r u p t   r e q u e s t   ( F I Q ) .  
 _ _ W E A K   I R Q n _ I D _ t   I R Q _ G e t A c t i v e F I Q   ( v o i d )   {  
     r e t u r n   ( ( I R Q n _ I D _ t ) - 1 ) ;  
 }  
  
  
 / / /   S i g n a l   e n d   o f   i n t e r r u p t   p r o c e s s i n g .  
 _ _ W E A K   i n t 3 2 _ t   I R Q _ E n d O f I n t e r r u p t   ( I R Q n _ I D _ t   i r q n )   {  
     i n t 3 2 _ t   s t a t u s ;  
     I R Q n _ T y p e   i r q   =   ( I R Q n _ T y p e ) i r q n ;  
  
     i r q n   & =   0 x 3 F F U ;  
  
     i f   ( ( i r q n   > =   0 )   & &   ( i r q n   <   ( I R Q n _ I D _ t ) I R Q _ G I C _ L I N E _ C O U N T ) )   {  
         G I C _ E n d I n t e r r u p t   ( i r q ) ;  
  
         i f   ( i r q n   = =   0 )   {  
             I R Q _ I D 0   =   0 U ;  
         }  
  
         s t a t u s   =   0 ;  
     }   e l s e   {  
         s t a t u s   =   - 1 ;  
     }  
  
     r e t u r n   ( s t a t u s ) ;  
 }  
  
  
 / / /   S e t   i n t e r r u p t   p e n d i n g   f l a g .  
 _ _ W E A K   i n t 3 2 _ t   I R Q _ S e t P e n d i n g   ( I R Q n _ I D _ t   i r q n )   {  
     i n t 3 2 _ t   s t a t u s ;  
  
     i f   ( ( i r q n   > =   0 )   & &   ( i r q n   <   ( I R Q n _ I D _ t ) I R Q _ G I C _ L I N E _ C O U N T ) )   {  
         G I C _ S e t P e n d i n g I R Q   ( ( I R Q n _ T y p e ) i r q n ) ;  
         s t a t u s   =   0 ;  
     }   e l s e   {  
         s t a t u s   =   - 1 ;  
     }  
  
     r e t u r n   ( s t a t u s ) ;  
 }  
  
 / / /   G e t   i n t e r r u p t   p e n d i n g   f l a g .  
 _ _ W E A K   u i n t 3 2 _ t   I R Q _ G e t P e n d i n g   ( I R Q n _ I D _ t   i r q n )   {  
     u i n t 3 2 _ t   p e n d i n g ;  
  
     i f   ( ( i r q n   > =   1 6 )   & &   ( i r q n   <   ( I R Q n _ I D _ t ) I R Q _ G I C _ L I N E _ C O U N T ) )   {  
         p e n d i n g   =   G I C _ G e t P e n d i n g I R Q   ( ( I R Q n _ T y p e ) i r q n ) ;  
     }   e l s e   {  
         p e n d i n g   =   0 U ;  
     }  
  
     r e t u r n   ( p e n d i n g   &   1 U ) ;  
 }  
  
  
 / / /   C l e a r   i n t e r r u p t   p e n d i n g   f l a g .  
 _ _ W E A K   i n t 3 2 _ t   I R Q _ C l e a r P e n d i n g   ( I R Q n _ I D _ t   i r q n )   {  
     i n t 3 2 _ t   s t a t u s ;  
  
     i f   ( ( i r q n   > =   1 6 )   & &   ( i r q n   <   ( I R Q n _ I D _ t ) I R Q _ G I C _ L I N E _ C O U N T ) )   {  
         G I C _ C l e a r P e n d i n g I R Q   ( ( I R Q n _ T y p e ) i r q n ) ;  
         s t a t u s   =   0 ;  
     }   e l s e   {  
         s t a t u s   =   - 1 ;  
     }  
  
     r e t u r n   ( s t a t u s ) ;  
 }  
  
  
 / / /   S e t   i n t e r r u p t   p r i o r i t y   v a l u e .  
 _ _ W E A K   i n t 3 2 _ t   I R Q _ S e t P r i o r i t y   ( I R Q n _ I D _ t   i r q n ,   u i n t 3 2 _ t   p r i o r i t y )   {  
     i n t 3 2 _ t   s t a t u s ;  
  
     i f   ( ( i r q n   > =   0 )   & &   ( i r q n   <   ( I R Q n _ I D _ t ) I R Q _ G I C _ L I N E _ C O U N T ) )   {  
         G I C _ S e t P r i o r i t y   ( ( I R Q n _ T y p e ) i r q n ,   p r i o r i t y ) ;  
         s t a t u s   =   0 ;  
     }   e l s e   {  
         s t a t u s   =   - 1 ;  
     }  
  
     r e t u r n   ( s t a t u s ) ;  
 }  
  
  
 / / /   G e t   i n t e r r u p t   p r i o r i t y .  
 _ _ W E A K   u i n t 3 2 _ t   I R Q _ G e t P r i o r i t y   ( I R Q n _ I D _ t   i r q n )   {  
     u i n t 3 2 _ t   p r i o r i t y ;  
  
     i f   ( ( i r q n   > =   0 )   & &   ( i r q n   <   ( I R Q n _ I D _ t ) I R Q _ G I C _ L I N E _ C O U N T ) )   {  
         p r i o r i t y   =   G I C _ G e t P r i o r i t y   ( ( I R Q n _ T y p e ) i r q n ) ;  
     }   e l s e   {  
         p r i o r i t y   =   I R Q _ P R I O R I T Y _ E R R O R ;  
     }  
  
     r e t u r n   ( p r i o r i t y ) ;  
 }  
  
  
 / / /   S e t   p r i o r i t y   m a s k i n g   t h r e s h o l d .  
 _ _ W E A K   i n t 3 2 _ t   I R Q _ S e t P r i o r i t y M a s k   ( u i n t 3 2 _ t   p r i o r i t y )   {  
     G I C _ S e t I n t e r f a c e P r i o r i t y M a s k   ( p r i o r i t y ) ;  
     r e t u r n   ( 0 ) ;  
 }  
  
  
 / / /   G e t   p r i o r i t y   m a s k i n g   t h r e s h o l d  
 _ _ W E A K   u i n t 3 2 _ t   I R Q _ G e t P r i o r i t y M a s k   ( v o i d )   {  
     r e t u r n   G I C _ G e t I n t e r f a c e P r i o r i t y M a s k ( ) ;  
 }  
  
  
 / / /   S e t   p r i o r i t y   g r o u p i n g   f i e l d   s p l i t   p o i n t  
 _ _ W E A K   i n t 3 2 _ t   I R Q _ S e t P r i o r i t y G r o u p B i t s   ( u i n t 3 2 _ t   b i t s )   {  
     i n t 3 2 _ t   s t a t u s ;  
  
     i f   ( b i t s   = =   I R Q _ P R I O R I T Y _ M s k )   {  
         b i t s   =   7 U ;  
     }  
  
     i f   ( b i t s   <   8 U )   {  
         G I C _ S e t B i n a r y P o i n t   ( 7 U   -   b i t s ) ;  
         s t a t u s   =   0 ;  
     }   e l s e   {  
         s t a t u s   =   - 1 ;  
     }  
  
     r e t u r n   ( s t a t u s ) ;  
 }  
  
  
 / / /   G e t   p r i o r i t y   g r o u p i n g   f i e l d   s p l i t   p o i n t  
 _ _ W E A K   u i n t 3 2 _ t   I R Q _ G e t P r i o r i t y G r o u p B i t s   ( v o i d )   {  
     u i n t 3 2 _ t   b p ;  
  
     b p   =   G I C _ G e t B i n a r y P o i n t ( )   &   0 x 0 7 U ;  
  
     r e t u r n   ( 7 U   -   b p ) ;  
 }  
  
 # e n d i f  