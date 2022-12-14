??/ *  
   *   C o p y r i g h t   ( c )   2 0 0 6 - 2 0 1 9 ,   R T - T h r e a d   D e v e l o p m e n t   T e a m  
   *  
   *   S P D X - L i c e n s e - I d e n t i f i e r :   A p a c h e - 2 . 0  
   *  
   *   C h a n g e   L o g s :  
   *   D a t e                       A u t h o r               N o t e s  
   *   2 0 2 1 - 0 5 - 2 4                                     t h e   f i r s t   v e r s i o n  
   * /  
  
 # i n c l u d e   < r t h w . h >  
 # i n c l u d e   < r t t h r e a d . h >  
  
 # i n c l u d e   " m a i n . h "  
  
 # i f   d e f i n e d ( R T _ U S I N G _ U S E R _ M A I N )   & &   d e f i n e d ( R T _ U S I N G _ H E A P )  
 / *  
   *   P l e a s e   m o d i f y   R T _ H E A P _ S I Z E   i f   y o u   e n a b l e   R T _ U S I N G _ H E A P  
   *   t h e   R T _ H E A P _ S I Z E   m a x   v a l u e   =   ( s r a m   s i z e   -   Z I   s i z e ) ,   1 0 2 4   m e a n s   1 0 2 4   b y t e s  
   * /  
 # d e f i n e   R T _ H E A P _ S I Z E   ( 1 5 * 1 0 2 4 )  
 s t a t i c   r t _ u i n t 8 _ t   r t _ h e a p [ R T _ H E A P _ S I Z E ] ;  
  
 R T _ W E A K   v o i d   * r t _ h e a p _ b e g i n _ g e t ( v o i d )  
 {  
         r e t u r n   r t _ h e a p ;  
 }  
  
 R T _ W E A K   v o i d   * r t _ h e a p _ e n d _ g e t ( v o i d )  
 {  
         r e t u r n   r t _ h e a p   +   R T _ H E A P _ S I Z E ;  
 }  
 # e n d i f  
  
 v o i d   S y s T i c k _ H a n d l e r ( v o i d )  
 {  
         r t _ i n t e r r u p t _ e n t e r ( ) ;  
          
         r t _ t i c k _ i n c r e a s e ( ) ;  
  
         r t _ i n t e r r u p t _ l e a v e ( ) ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   i n i t i a l   y o u r   b o a r d .  
   * /  
 v o i d   r t _ h w _ b o a r d _ i n i t ( v o i d )  
 {  
         e x t e r n   v o i d   S y s t e m C l o c k _ C o n f i g ( v o i d ) ;  
          
         H A L _ I n i t ( ) ;  
         S y s t e m C l o c k _ C o n f i g ( ) ;  
         S y s t e m C o r e C l o c k U p d a t e ( ) ;  
         / *    
           *   1 :   O S   T i c k   C o n f i g u r a t i o n  
           *   E n a b l e   t h e   h a r d w a r e   t i m e r   a n d   c a l l   t h e   r t _ o s _ t i c k _ c a l l b a c k   f u n c t i o n  
           *   p e r i o d i c a l l y   w i t h   t h e   f r e q u e n c y   R T _ T I C K _ P E R _ S E C O N D .    
           * /  
         H A L _ S Y S T I C K _ C o n f i g ( H A L _ R C C _ G e t H C L K F r e q ( ) / R T _ T I C K _ P E R _ S E C O N D ) ;  
  
         / *   C a l l   c o m p o n e n t s   b o a r d   i n i t i a l   ( u s e   I N I T _ B O A R D _ E X P O R T ( ) )   * /  
 # i f d e f   R T _ U S I N G _ C O M P O N E N T S _ I N I T  
         r t _ c o m p o n e n t s _ b o a r d _ i n i t ( ) ;  
 # e n d i f  
  
 # i f   d e f i n e d ( R T _ U S I N G _ U S E R _ M A I N )   & &   d e f i n e d ( R T _ U S I N G _ H E A P )  
         r t _ s y s t e m _ h e a p _ i n i t ( r t _ h e a p _ b e g i n _ g e t ( ) ,   r t _ h e a p _ e n d _ g e t ( ) ) ;  
 # e n d i f  
 }  
  
 # i f d e f   R T _ U S I N G _ C O N S O L E  
  
 s t a t i c   U A R T _ H a n d l e T y p e D e f   U a r t H a n d l e ;  
 s t a t i c   i n t   u a r t _ i n i t ( v o i d )  
 {  
         / *   T O D O :   P l e a s e   m o d i f y   t h e   U A R T   p o r t   n u m b e r   a c c o r d i n g   t o   y o u r   n e e d s   * /  
         U a r t H a n d l e . I n s t a n c e   =   U S A R T 2 ;  
         U a r t H a n d l e . I n i t . B a u d R a t e   =   1 1 5 2 0 0 ;  
         U a r t H a n d l e . I n i t . W o r d L e n g t h   =   U A R T _ W O R D L E N G T H _ 8 B ;  
         U a r t H a n d l e . I n i t . S t o p B i t s   =   U A R T _ S T O P B I T S _ 1 ;  
         U a r t H a n d l e . I n i t . P a r i t y   =   U A R T _ P A R I T Y _ N O N E ;  
         U a r t H a n d l e . I n i t . M o d e   =   U A R T _ M O D E _ T X _ R X ;  
         U a r t H a n d l e . I n i t . H w F l o w C t l   =   U A R T _ H W C O N T R O L _ N O N E ;  
         U a r t H a n d l e . I n i t . O v e r S a m p l i n g   =   U A R T _ O V E R S A M P L I N G _ 1 6 ;  
  
         i f   ( H A L _ U A R T _ I n i t ( & U a r t H a n d l e )   ! =   H A L _ O K )  
         {  
                 w h i l e   ( 1 ) ;  
         }  
         r e t u r n   0 ;  
 }  
 I N I T _ B O A R D _ E X P O R T ( u a r t _ i n i t ) ;  
  
 v o i d   r t _ h w _ c o n s o l e _ o u t p u t ( c o n s t   c h a r   * s t r )  
 {  
         r t _ s i z e _ t   i   =   0 ,   s i z e   =   0 ;  
         c h a r   a   =   ' \ r ' ;  
  
         _ _ H A L _ U N L O C K ( & U a r t H a n d l e ) ;  
  
         s i z e   =   r t _ s t r l e n ( s t r ) ;  
  
         f o r   ( i   =   0 ;   i   <   s i z e ;   i + + )  
         {  
                 i f   ( * ( s t r   +   i )   = =   ' \ n ' )  
                 {  
                         H A L _ U A R T _ T r a n s m i t ( & U a r t H a n d l e ,   ( u i n t 8 _ t   * ) & a ,   1 ,   1 ) ;  
                 }  
                 H A L _ U A R T _ T r a n s m i t ( & U a r t H a n d l e ,   ( u i n t 8 _ t   * ) ( s t r   +   i ) ,   1 ,   1 ) ;  
         }  
 }  
 # e n d i f  
  
 # i f d e f   R T _ U S I N G _ F I N S H  
 c h a r   r t _ h w _ c o n s o l e _ g e t c h a r ( v o i d )  
 {  
         / *   N o t e :   t h e   i n i t i a l   v a l u e   o f   c h   m u s t   <   0   * /  
         i n t   c h   =   - 1 ;  
  
         i f   ( _ _ H A L _ U A R T _ G E T _ F L A G ( & U a r t H a n d l e ,   U A R T _ F L A G _ R X N E )   ! =   R E S E T )  
         {  
                 c h   =   U a r t H a n d l e . I n s t a n c e - > D R   &   0 x f f ;  
         }  
         e l s e  
         {  
                 r t _ t h r e a d _ m d e l a y ( 1 0 ) ;  
         }  
         r e t u r n   c h ;  
 }  
 # e n d i f  